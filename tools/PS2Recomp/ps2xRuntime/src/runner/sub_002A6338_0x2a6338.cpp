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

// Function: sub_002A6338
// Address: 0x2a6338 - 0x2a69f0
void sub_002A6338_0x2a6338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6338_0x2a6338");
#endif

    switch (ctx->pc) {
        case 0x2a63c4u: goto label_2a63c4;
        case 0x2a6444u: goto label_2a6444;
        case 0x2a65a8u: goto label_2a65a8;
        case 0x2a6610u: goto label_2a6610;
        case 0x2a6658u: goto label_2a6658;
        case 0x2a6680u: goto label_2a6680;
        case 0x2a669cu: goto label_2a669c;
        case 0x2a6828u: goto label_2a6828;
        default: break;
    }

    ctx->pc = 0x2a6338u;

    // 0x2a6338: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2a6338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2a633c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2a633cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6340: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x2a6340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x2a6344: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x2a6344u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a6348: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x2a6348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x2a634c: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x2a634cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6350: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x2a6350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x2a6354: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2a6354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2a6358: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x2a6358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x2a635c: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x2a635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x2a6360: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x2a6360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x2a6364: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x2a6364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x2a6368: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x2a6368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x2a636c: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x2a636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x2a6370: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2a6370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2a6374: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2a6374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2a6378: 0xafbd00f0  sw          $sp, 0xF0($sp)
    ctx->pc = 0x2a6378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 29));
    // 0x2a637c: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x2a637cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2a6380: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x2a6380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2a6384: 0x8c8e0008  lw          $t6, 0x8($a0)
    ctx->pc = 0x2a6384u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a6388: 0xb3ad0007  sdl         $t5, 0x7($sp)
    ctx->pc = 0x2a6388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a638c: 0xb7ad0000  sdr         $t5, 0x0($sp)
    ctx->pc = 0x2a638cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6390: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2A6390u;
    {
        const bool branch_taken_0x2a6390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6390u;
        // 0x2a6394: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6390) {
            ctx->pc = 0x2A6418u;
            goto label_2a6418;
        }
    }
    ctx->pc = 0x2A6398u;
    // 0x2a6398: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x2a6398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2a639c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a63a0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2a63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a63a4: 0x27ad00c0  addiu       $t5, $sp, 0xC0
    ctx->pc = 0x2a63a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a63a8: 0x27ae00d0  addiu       $t6, $sp, 0xD0
    ctx->pc = 0x2a63a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a63ac: 0x27af00e0  addiu       $t7, $sp, 0xE0
    ctx->pc = 0x2a63acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a63b0: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x2a63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x2a63b4: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x2a63b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
    // 0x2a63b8: 0xafad00fc  sw          $t5, 0xFC($sp)
    ctx->pc = 0x2a63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 13));
    // 0x2a63bc: 0xafae0100  sw          $t6, 0x100($sp)
    ctx->pc = 0x2a63bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 14));
    // 0x2a63c0: 0xafaf0104  sw          $t7, 0x104($sp)
    ctx->pc = 0x2a63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 15));
label_2a63c4:
    // 0x2a63c4: 0x68700007  ldl         $s0, 0x7($v1)
    ctx->pc = 0x2a63c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x2a63c8: 0x6c700000  ldr         $s0, 0x0($v1)
    ctx->pc = 0x2a63c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2a63cc: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x2a63ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a63d0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x2a63d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a63d4: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x2a63d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a63d8: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x2a63d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a63dc: 0x686d001f  ldl         $t5, 0x1F($v1)
    ctx->pc = 0x2a63dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2a63e0: 0x6c6d0018  ldr         $t5, 0x18($v1)
    ctx->pc = 0x2a63e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2a63e4: 0xb1700007  sdl         $s0, 0x7($t3)
    ctx->pc = 0x2a63e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a63e8: 0xb5700000  sdr         $s0, 0x0($t3)
    ctx->pc = 0x2a63e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a63ec: 0xb164000f  sdl         $a0, 0xF($t3)
    ctx->pc = 0x2a63ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a63f0: 0xb5640008  sdr         $a0, 0x8($t3)
    ctx->pc = 0x2a63f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a63f4: 0xb1650017  sdl         $a1, 0x17($t3)
    ctx->pc = 0x2a63f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a63f8: 0xb5650010  sdr         $a1, 0x10($t3)
    ctx->pc = 0x2a63f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a63fc: 0xb16d001f  sdl         $t5, 0x1F($t3)
    ctx->pc = 0x2a63fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6400: 0xb56d0018  sdr         $t5, 0x18($t3)
    ctx->pc = 0x2a6400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6404: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a6404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a6408: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A6408u;
    {
        const bool branch_taken_0x2a6408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6408u;
        // 0x2a640c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6408) {
            ctx->pc = 0x2A63C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a63c4;
        }
    }
    ctx->pc = 0x2A6410u;
    // 0x2a6410: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A6410u;
    {
        const bool branch_taken_0x2a6410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6410) {
            ctx->pc = 0x2A6470u;
            goto label_2a6470;
        }
    }
    ctx->pc = 0x2A6418u;
label_2a6418:
    // 0x2a6418: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x2a6418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2a641c: 0x27ae00a0  addiu       $t6, $sp, 0xA0
    ctx->pc = 0x2a641cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a6420: 0x27af00b0  addiu       $t7, $sp, 0xB0
    ctx->pc = 0x2a6420u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a6424: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a6428: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2a6428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a642c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2a642cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a6430: 0xafae0108  sw          $t6, 0x108($sp)
    ctx->pc = 0x2a6430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 14));
    // 0x2a6434: 0xafaf010c  sw          $t7, 0x10C($sp)
    ctx->pc = 0x2a6434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 15));
    // 0x2a6438: 0xafb000fc  sw          $s0, 0xFC($sp)
    ctx->pc = 0x2a6438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 16));
    // 0x2a643c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2a643cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2a6440: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x2a6440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
label_2a6444:
    // 0x2a6444: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x2a6444u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6448: 0xdc6e0008  ld          $t6, 0x8($v1)
    ctx->pc = 0x2a6448u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a644c: 0xdc6f0010  ld          $t7, 0x10($v1)
    ctx->pc = 0x2a644cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a6450: 0xdc700018  ld          $s0, 0x18($v1)
    ctx->pc = 0x2a6450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a6454: 0xfd6d0000  sd          $t5, 0x0($t3)
    ctx->pc = 0x2a6454u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 13));
    // 0x2a6458: 0xfd6e0008  sd          $t6, 0x8($t3)
    ctx->pc = 0x2a6458u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 14));
    // 0x2a645c: 0xfd6f0010  sd          $t7, 0x10($t3)
    ctx->pc = 0x2a645cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 15));
    // 0x2a6460: 0xfd700018  sd          $s0, 0x18($t3)
    ctx->pc = 0x2a6460u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 16));
    // 0x2a6464: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a6468: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A6468u;
    {
        const bool branch_taken_0x2a6468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6468u;
        // 0x2a646c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6468) {
            ctx->pc = 0x2A6444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6444;
        }
    }
    ctx->pc = 0x2A6470u;
label_2a6470:
    // 0x2a6470: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2a6470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a6474: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2a6474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a6478: 0xb1620007  sdl         $v0, 0x7($t3)
    ctx->pc = 0x2a6478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a647c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a647cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6480: 0xb5620000  sdr         $v0, 0x0($t3)
    ctx->pc = 0x2a6480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6484: 0x68ce0007  ldl         $t6, 0x7($a2)
    ctx->pc = 0x2a6484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2a6488: 0x6cce0000  ldr         $t6, 0x0($a2)
    ctx->pc = 0x2a6488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2a648c: 0x8ccf0008  lw          $t7, 0x8($a2)
    ctx->pc = 0x2a648cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a6490: 0xb3ae00a7  sdl         $t6, 0xA7($sp)
    ctx->pc = 0x2a6490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6494: 0xb7ae00a0  sdr         $t6, 0xA0($sp)
    ctx->pc = 0x2a6494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6498: 0xafaf00a8  sw          $t7, 0xA8($sp)
    ctx->pc = 0x2a6498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 15));
    // 0x2a649c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2a649cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a64a0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2a64a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a64a4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2a64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a64a8: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x2a64a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64ac: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x2a64acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64b0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x2a64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x2a64b4: 0x690e0007  ldl         $t6, 0x7($t0)
    ctx->pc = 0x2a64b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2a64b8: 0x6d0e0000  ldr         $t6, 0x0($t0)
    ctx->pc = 0x2a64b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2a64bc: 0x8d0f0008  lw          $t7, 0x8($t0)
    ctx->pc = 0x2a64bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2a64c0: 0xb3ae00c7  sdl         $t6, 0xC7($sp)
    ctx->pc = 0x2a64c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64c4: 0xb7ae00c0  sdr         $t6, 0xC0($sp)
    ctx->pc = 0x2a64c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64c8: 0xafaf00c8  sw          $t7, 0xC8($sp)
    ctx->pc = 0x2a64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 15));
    // 0x2a64cc: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x2a64ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a64d0: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x2a64d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a64d4: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x2a64d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2a64d8: 0xb3a300d7  sdl         $v1, 0xD7($sp)
    ctx->pc = 0x2a64d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64dc: 0xb7a300d0  sdr         $v1, 0xD0($sp)
    ctx->pc = 0x2a64dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64e0: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x2a64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x2a64e4: 0x694d0007  ldl         $t5, 0x7($t2)
    ctx->pc = 0x2a64e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2a64e8: 0x6d4d0000  ldr         $t5, 0x0($t2)
    ctx->pc = 0x2a64e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2a64ec: 0x8d4e0008  lw          $t6, 0x8($t2)
    ctx->pc = 0x2a64ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2a64f0: 0xb3ad00e7  sdl         $t5, 0xE7($sp)
    ctx->pc = 0x2a64f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64f4: 0xb7ad00e0  sdr         $t5, 0xE0($sp)
    ctx->pc = 0x2a64f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a64f8: 0xafae00e8  sw          $t6, 0xE8($sp)
    ctx->pc = 0x2a64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 14));
    // 0x2a64fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a64fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6508: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2a6508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a650c: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x2a650cu;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x2a6510: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2a6510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x2a6514: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a6514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a6518: 0x8d840028  lw          $a0, 0x28($t4)
    ctx->pc = 0x2a6518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x2a651c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A651Cu;
    {
        const bool branch_taken_0x2a651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A651Cu;
        // 0x2a6520: 0xafa400f8  sw          $a0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a651c) {
            ctx->pc = 0x2A6600u;
            goto label_2a6600;
        }
    }
    ctx->pc = 0x2A6524u;
    // 0x2a6524: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a6524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6528: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a6528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a652c: 0x30c40003  andi        $a0, $a2, 0x3
    ctx->pc = 0x2a652cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2a6530: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A6530u;
    {
        const bool branch_taken_0x2a6530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6530u;
        // 0x2a6534: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6530) {
            ctx->pc = 0x2A659Cu;
            goto label_2a659c;
        }
    }
    ctx->pc = 0x2A6538u;
    // 0x2a6538: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2a6538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a653c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A653Cu;
    {
        const bool branch_taken_0x2a653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a653c) {
            ctx->pc = 0x2A6540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A653Cu;
            // 0x2a6540: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6584u;
            goto label_2a6584;
        }
    }
    ctx->pc = 0x2A6544u;
    // 0x2a6544: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2a6544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a6548: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6548u;
    {
        const bool branch_taken_0x2a6548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6548) {
            ctx->pc = 0x2A654Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6548u;
            // 0x2a654c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A656Cu;
            goto label_2a656c;
        }
    }
    ctx->pc = 0x2A6550u;
    // 0x2a6550: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a6550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a6554: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x2a6554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a6558: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a6558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a655c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2a655cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6560: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2a6560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2a6564: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2a6564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2a6568: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a6568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a656c:
    // 0x2a656c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a656cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2a6570: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a6570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a6574: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2a6574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2a6578: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2a6578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2a657c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a6580: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a6580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a6584:
    // 0x2a6584: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a6584u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2a6588: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a6588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a658c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2a658cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2a6590: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2a6590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2a6594: 0x12e6001a  beq         $s7, $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A6594u;
    {
        const bool branch_taken_0x2a6594 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 6));
        ctx->pc = 0x2A6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6594u;
        // 0x2a6598: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6594) {
            ctx->pc = 0x2A6600u;
            goto label_2a6600;
        }
    }
    ctx->pc = 0x2A659Cu;
label_2a659c:
    // 0x2a659c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a659cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a65a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a65a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a65a8:
    // 0x2a65a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a65ac: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x2a65acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2a65b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a65b4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2a65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2a65b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2a65bc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2a65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2a65c0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a65c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2a65c4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2a65c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2a65c8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2a65c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2a65cc: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2a65ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2a65d0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2a65d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2a65d4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x2a65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x2a65d8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2a65d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2a65dc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2a65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2a65e0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2a65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2a65e4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2a65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2a65e8: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x2a65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x2a65ec: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2a65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2a65f0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2a65f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2a65f4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2a65f8: 0x16e6ffeb  bne         $s7, $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A65F8u;
    {
        const bool branch_taken_0x2a65f8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 6));
        ctx->pc = 0x2A65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65F8u;
        // 0x2a65fc: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65f8) {
            ctx->pc = 0x2A65A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a65a8;
        }
    }
    ctx->pc = 0x2A6600u;
label_2a6600:
    // 0x2a6600: 0x8d82007c  lw          $v0, 0x7C($t4)
    ctx->pc = 0x2a6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 124)));
    // 0x2a6604: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A6604u;
    {
        const bool branch_taken_0x2a6604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6604u;
        // 0x2a6608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6604) {
            ctx->pc = 0x2A66DCu;
            goto label_2a66dc;
        }
    }
    ctx->pc = 0x2A660Cu;
    // 0x2a660c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a660cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6610:
    // 0x2a6610: 0x8d820040  lw          $v0, 0x40($t4)
    ctx->pc = 0x2a6610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x2a6614: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a6614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a6618: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2a6618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a661c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a661cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6628: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A6628u;
    {
        const bool branch_taken_0x2a6628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6628u;
        // 0x2a662c: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6628) {
            ctx->pc = 0x2A66B4u;
            goto label_2a66b4;
        }
    }
    ctx->pc = 0x2A6630u;
    // 0x2a6630: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2a6630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a6634: 0x8fad0104  lw          $t5, 0x104($sp)
    ctx->pc = 0x2a6634u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2a6638: 0xa7a018  mult        $s4, $a1, $a3
    ctx->pc = 0x2a6638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2a663c: 0x8fae00f4  lw          $t6, 0xF4($sp)
    ctx->pc = 0x2a663cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2a6640: 0x8db30000  lw          $s3, 0x0($t5)
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2a6644: 0x59140  sll         $s2, $a1, 5
    ctx->pc = 0x2a6644u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a6648: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x2a6648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2a664c: 0x2ce8021  addu        $s0, $s6, $t6
    ctx->pc = 0x2a664cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x2a6650: 0x8faf00f0  lw          $t7, 0xF0($sp)
    ctx->pc = 0x2a6650u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a6654: 0x0  nop
    ctx->pc = 0x2a6654u;
    // NOP
label_2a6658:
    // 0x2a6658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a6658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a665c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a665cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a6660: 0x2723021  addu        $a2, $s3, $s2
    ctx->pc = 0x2a6660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2a6664: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x2a6664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2a6668: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a6668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a666c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a666cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a6670: 0x7fac0110  sq          $t4, 0x110($sp)
    ctx->pc = 0x2a6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 12));
    // 0x2a6674: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2a6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a6678: 0xc0a9870  jal         func_2A61C0
    ctx->pc = 0x2A6678u;
    SET_GPR_U32(ctx, 31, 0x2A6680u);
    ctx->pc = 0x2A667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6678u;
    // 0x2a667c: 0x26d60060  addiu       $s6, $s6, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A61C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A61C0u, 0x2A6678u, 0x2A6680u)) {
        return;
    }
    ctx->pc = 0x2A6680u;
label_2a6680:
    // 0x2a6680: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a6680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2a6684: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2a6684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a6688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a668c: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x2a668cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2a6690: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6694: 0xc0a97ba  jal         func_2A5EE8
    ctx->pc = 0x2A6694u;
    SET_GPR_U32(ctx, 31, 0x2A669Cu);
    ctx->pc = 0x2A6698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6694u;
    // 0x2a6698: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5EE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A5EE8u, 0x2A6694u, 0x2A669Cu)) {
        return;
    }
    ctx->pc = 0x2A669Cu;
label_2a669c:
    // 0x2a669c: 0x7bac0110  lq          $t4, 0x110($sp)
    ctx->pc = 0x2a669cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a66a0: 0x8d820040  lw          $v0, 0x40($t4)
    ctx->pc = 0x2a66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x2a66a4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2a66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2a66a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a66ac: 0x16e3ffea  bne         $s7, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A66ACu;
    {
        const bool branch_taken_0x2a66ac = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66ACu;
        // 0x2a66b0: 0x8faf00f0  lw          $t7, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66ac) {
            ctx->pc = 0x2A6658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6658;
        }
    }
    ctx->pc = 0x2A66B4u;
label_2a66b4:
    // 0x2a66b4: 0x8d820040  lw          $v0, 0x40($t4)
    ctx->pc = 0x2a66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x2a66b8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a66b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66bc: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2a66bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2a66c0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2a66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2a66c4: 0x8d84007c  lw          $a0, 0x7C($t4)
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 124)));
    // 0x2a66c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a66cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a66d0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2a66d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a66d4: 0x14a4ffce  bne         $a1, $a0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2A66D4u;
    {
        const bool branch_taken_0x2a66d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66D4u;
        // 0x2a66d8: 0xafa700f8  sw          $a3, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66d4) {
            ctx->pc = 0x2A6610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6610;
        }
    }
    ctx->pc = 0x2A66DCu;
label_2a66dc:
    // 0x2a66dc: 0x8fad00f0  lw          $t5, 0xF0($sp)
    ctx->pc = 0x2a66dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a66e0: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2a66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2a66e4: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2A66E4u;
    {
        const bool branch_taken_0x2a66e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66E4u;
        // 0x2a66e8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66e4) {
            ctx->pc = 0x2A69BCu;
            goto label_2a69bc;
        }
    }
    ctx->pc = 0x2A66ECu;
    // 0x2a66ec: 0x8fae00fc  lw          $t6, 0xFC($sp)
    ctx->pc = 0x2a66ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2a66f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a66f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66f4: 0x8faf0108  lw          $t7, 0x108($sp)
    ctx->pc = 0x2a66f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a66f8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2a66f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2a66fc: 0x8fb0010c  lw          $s0, 0x10C($sp)
    ctx->pc = 0x2a66fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2a6700: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x2a6700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2a6704: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x2a6704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2a6708: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a6708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a670c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a670cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6710: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2a6710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2a6714: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2a6714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6718: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a6718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a671c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A671Cu;
    {
        const bool branch_taken_0x2a671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A671Cu;
        // 0x2a6720: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a671c) {
            ctx->pc = 0x2A67DCu;
            goto label_2a67dc;
        }
    }
    ctx->pc = 0x2A6724u;
    // 0x2a6724: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2a6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6728: 0x24ca0010  addiu       $t2, $a2, 0x10
    ctx->pc = 0x2a6728u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2a672c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6730: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x2a6730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a6734: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a6734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6738: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x2a6738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a673c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a673cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a6740: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a6740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6744: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2a6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6748: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x2a6748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a674c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2a674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6750: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2a6750u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6754: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a6754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a6758: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x2a6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a675c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a675cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a6760: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a6760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a6764: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a6764u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a6768: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2a6768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a676c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2a676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6770: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a6770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6774: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a6774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6778: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a6778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a677c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a677cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a6780: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a6780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6784: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a6784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a6788: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2a6788u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a678c: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x2a678cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a6790: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2a6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6794: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6798: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2a6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a679c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a679cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a67a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a67a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a67a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a67a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a67a8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a67a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a67ac: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2a67acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2a67b0: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x2a67b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a67b4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2a67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a67b8: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x2a67b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a67bc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2a67bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a67c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a67c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a67c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a67c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a67c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a67c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a67cc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a67ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a67d0: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2a67d0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2a67d4: 0x12b70079  beq         $s5, $s7, . + 4 + (0x79 << 2)
    ctx->pc = 0x2A67D4u;
    {
        const bool branch_taken_0x2a67d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x2A67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67D4u;
        // 0x2a67d8: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67d4) {
            ctx->pc = 0x2A69BCu;
            goto label_2a69bc;
        }
    }
    ctx->pc = 0x2A67DCu;
label_2a67dc:
    // 0x2a67dc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2a67dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67e0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2a67e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67e4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2a67e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67e8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2a67e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a67ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a67f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a67f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a67f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a67fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6800: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a6800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6804: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2a6804u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6808: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x2a6808u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a680c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x2a680cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6810: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2a6810u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6814: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2a6814u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6818: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2a6818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a681c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2a681cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6820: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a6820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6824: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6828:
    // 0x2a6828: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2a6828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a682c: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x2a682cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x2a6830: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x2a6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6834: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2a6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6838: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a6838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a683c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6840: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a6840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a6844: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a6844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a6848: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a6848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a684c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a684cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a6850: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2a6850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a6854: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x2a6854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6858: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2a6858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a685c: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x2a685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6860: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a6860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a6864: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2a6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6868: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a6868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a686c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a686cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6870: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a6870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a6874: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2a6874u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2a6878: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2a6878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a687c: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x2a687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6880: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x2a6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6884: 0xc5e10008  lwc1        $f1, 0x8($t7)
    ctx->pc = 0x2a6884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6888: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a6888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a688c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2a688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6890: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a6890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a6894: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a6894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6898: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a6898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a689c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2a689cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2a68a0: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2a68a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2a68a4: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x2a68a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a68a8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a68a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a68ac: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2a68acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a68b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a68b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a68b4: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x2a68b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a68b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a68b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a68bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a68bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a68c0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a68c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a68c4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2a68c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2a68c8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2a68c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a68cc: 0xc4e30010  lwc1        $f3, 0x10($a3)
    ctx->pc = 0x2a68ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a68d0: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x2a68d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a68d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2a68d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2a68d8: 0xc5a00010  lwc1        $f0, 0x10($t5)
    ctx->pc = 0x2a68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a68dc: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x2a68dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x2a68e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a68e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a68e4: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2a68e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a68e8: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x2a68e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x2a68ec: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a68ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a68f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a68f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a68f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a68f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a68f8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a68f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a68fc: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x2a68fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2a6900: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a6904: 0xc5030014  lwc1        $f3, 0x14($t0)
    ctx->pc = 0x2a6904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6908: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x2a6908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a690c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2a690cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2a6910: 0xc5c00014  lwc1        $f0, 0x14($t6)
    ctx->pc = 0x2a6910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6914: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2a6914u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x2a6918: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a6918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a691c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2a691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6920: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x2a6920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x2a6924: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2a6924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2a6928: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a6928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a692c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a692cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a6930: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a6930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a6934: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a6934u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a6938: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x2a6938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2a693c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2a693cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a6940: 0xc5230018  lwc1        $f3, 0x18($t1)
    ctx->pc = 0x2a6940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6944: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x2a6944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6948: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x2a6948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2a694c: 0xc5e00018  lwc1        $f0, 0x18($t7)
    ctx->pc = 0x2a694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6950: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2a6950u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2a6954: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a6954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a6958: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x2a6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a695c: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x2a695cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x2a6960: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2a6960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2a6964: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a6964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a6968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a6968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a696c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a696cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a6970: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a6970u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a6974: 0xe6620018  swc1        $f2, 0x18($s3)
    ctx->pc = 0x2a6974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2a6978: 0xc4a3001c  lwc1        $f3, 0x1C($a1)
    ctx->pc = 0x2a6978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a697c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x2a697cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2a6980: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x2a6980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6984: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2a6984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2a6988: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x2a6988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a698c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a698cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a6990: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2a6990u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a6994: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x2a6994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6998: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a6998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2a699c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x2a699cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2a69a0: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2a69a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2a69a4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a69a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a69a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a69a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a69ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a69acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a69b0: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x2a69b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2a69b4: 0x16f5ff9c  bne         $s7, $s5, . + 4 + (-0x64 << 2)
    ctx->pc = 0x2A69B4u;
    {
        const bool branch_taken_0x2a69b4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x2A69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69B4u;
        // 0x2a69b8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69b4) {
            ctx->pc = 0x2A6828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6828;
        }
    }
    ctx->pc = 0x2A69BCu;
label_2a69bc:
    // 0x2a69bc: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x2a69bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a69c0: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x2a69c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a69c4: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x2a69c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a69c8: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x2a69c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a69cc: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x2a69ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a69d0: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x2a69d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a69d4: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x2a69d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a69d8: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x2a69d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a69dc: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x2a69dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a69e0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2a69e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a69e4: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2a69e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a69e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A69E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69E8u;
        // 0x2a69ec: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A69E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A69F0u;
}
