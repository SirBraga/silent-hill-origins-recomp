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

// Function: sub_002EA8F0
// Address: 0x2ea8f0 - 0x2eabd0
void sub_002EA8F0_0x2ea8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA8F0_0x2ea8f0");
#endif

    switch (ctx->pc) {
        case 0x2eaa30u: goto label_2eaa30;
        case 0x2eaa60u: goto label_2eaa60;
        case 0x2eaa74u: goto label_2eaa74;
        case 0x2eaa9cu: goto label_2eaa9c;
        case 0x2eaaa8u: goto label_2eaaa8;
        case 0x2eaab0u: goto label_2eaab0;
        case 0x2eaae8u: goto label_2eaae8;
        case 0x2eaaf0u: goto label_2eaaf0;
        case 0x2eaaf8u: goto label_2eaaf8;
        case 0x2eab20u: goto label_2eab20;
        case 0x2eab44u: goto label_2eab44;
        case 0x2eab50u: goto label_2eab50;
        case 0x2eab58u: goto label_2eab58;
        case 0x2eab6cu: goto label_2eab6c;
        case 0x2eab84u: goto label_2eab84;
        case 0x2eab9cu: goto label_2eab9c;
        default: break;
    }

    ctx->pc = 0x2ea8f0u;

    // 0x2ea8f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ea8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ea8f4: 0xaf809098  sw          $zero, -0x6F68($gp)
    ctx->pc = 0x2ea8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 0));
    // 0x2ea8f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ea8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2ea8fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2ea8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2ea900: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ea900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2ea904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea908: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x2ea908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ea90c: 0xaf80909c  sw          $zero, -0x6F64($gp)
    ctx->pc = 0x2ea90cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938780), GPR_U32(ctx, 0));
    // 0x2ea910: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ea910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2ea914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea918: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ea918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ea91c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ea91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ea920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ea920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ea924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ea924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ea928: 0xaf918cb0  sw          $s1, -0x7350($gp)
    ctx->pc = 0x2ea928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 17));
    // 0x2ea92c: 0xaf80908c  sw          $zero, -0x6F74($gp)
    ctx->pc = 0x2ea92cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938764), GPR_U32(ctx, 0));
    // 0x2ea930: 0xae201380  sw          $zero, 0x1380($s1)
    ctx->pc = 0x2ea930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4992), GPR_U32(ctx, 0));
    // 0x2ea934: 0xae201398  sw          $zero, 0x1398($s1)
    ctx->pc = 0x2ea934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5016), GPR_U32(ctx, 0));
    // 0x2ea938: 0xae201384  sw          $zero, 0x1384($s1)
    ctx->pc = 0x2ea938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4996), GPR_U32(ctx, 0));
    // 0x2ea93c: 0xae201390  sw          $zero, 0x1390($s1)
    ctx->pc = 0x2ea93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5008), GPR_U32(ctx, 0));
    // 0x2ea940: 0xae201394  sw          $zero, 0x1394($s1)
    ctx->pc = 0x2ea940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5012), GPR_U32(ctx, 0));
    // 0x2ea944: 0x2469fee8  addiu       $t1, $v1, -0x118
    ctx->pc = 0x2ea944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967016));
    // 0x2ea948: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2ea948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ea94c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2ea94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ea950: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x2ea950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ea954: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x2ea954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ea958: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x2ea958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ea95c: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x2ea95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ea960: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2ea960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea964: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2ea964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea968: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x2ea968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea96c: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x2ea96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea970: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x2ea970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea974: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x2ea974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea978: 0x6922001f  ldl         $v0, 0x1F($t1)
    ctx->pc = 0x2ea978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ea97c: 0x6d220018  ldr         $v0, 0x18($t1)
    ctx->pc = 0x2ea97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ea980: 0x69270027  ldl         $a3, 0x27($t1)
    ctx->pc = 0x2ea980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ea984: 0x6d270020  ldr         $a3, 0x20($t1)
    ctx->pc = 0x2ea984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ea988: 0x6928002f  ldl         $t0, 0x2F($t1)
    ctx->pc = 0x2ea988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ea98c: 0x6d280028  ldr         $t0, 0x28($t1)
    ctx->pc = 0x2ea98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ea990: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x2ea990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea994: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x2ea994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea998: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x2ea998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea99c: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x2ea99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea9a0: 0xb3a8002f  sdl         $t0, 0x2F($sp)
    ctx->pc = 0x2ea9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea9a4: 0xb7a80028  sdr         $t0, 0x28($sp)
    ctx->pc = 0x2ea9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea9a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ea9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ea9ac: 0xae240660  sw          $a0, 0x660($s1)
    ctx->pc = 0x2ea9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 4));
    // 0x2ea9b0: 0xae2213a0  sw          $v0, 0x13A0($s1)
    ctx->pc = 0x2ea9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5024), GPR_U32(ctx, 2));
    // 0x2ea9b4: 0xae250664  sw          $a1, 0x664($s1)
    ctx->pc = 0x2ea9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 5));
    // 0x2ea9b8: 0xae2013d8  sw          $zero, 0x13D8($s1)
    ctx->pc = 0x2ea9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5080), GPR_U32(ctx, 0));
    // 0x2ea9bc: 0xae201370  sw          $zero, 0x1370($s1)
    ctx->pc = 0x2ea9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4976), GPR_U32(ctx, 0));
    // 0x2ea9c0: 0xae200cf0  sw          $zero, 0xCF0($s1)
    ctx->pc = 0x2ea9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3312), GPR_U32(ctx, 0));
    // 0x2ea9c4: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x2ea9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x2ea9c8: 0xae200634  sw          $zero, 0x634($s1)
    ctx->pc = 0x2ea9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1588), GPR_U32(ctx, 0));
    // 0x2ea9cc: 0xae200630  sw          $zero, 0x630($s1)
    ctx->pc = 0x2ea9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1584), GPR_U32(ctx, 0));
    // 0x2ea9d0: 0xae20063c  sw          $zero, 0x63C($s1)
    ctx->pc = 0x2ea9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1596), GPR_U32(ctx, 0));
    // 0x2ea9d4: 0xae200638  sw          $zero, 0x638($s1)
    ctx->pc = 0x2ea9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1592), GPR_U32(ctx, 0));
    // 0x2ea9d8: 0xae200644  sw          $zero, 0x644($s1)
    ctx->pc = 0x2ea9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 0));
    // 0x2ea9dc: 0xae200640  sw          $zero, 0x640($s1)
    ctx->pc = 0x2ea9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 0));
    // 0x2ea9e0: 0xae20064c  sw          $zero, 0x64C($s1)
    ctx->pc = 0x2ea9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 0));
    // 0x2ea9e4: 0xae200648  sw          $zero, 0x648($s1)
    ctx->pc = 0x2ea9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 0));
    // 0x2ea9e8: 0xae200654  sw          $zero, 0x654($s1)
    ctx->pc = 0x2ea9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 0));
    // 0x2ea9ec: 0xae200650  sw          $zero, 0x650($s1)
    ctx->pc = 0x2ea9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 0));
    // 0x2ea9f0: 0xaf809088  sw          $zero, -0x6F78($gp)
    ctx->pc = 0x2ea9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 0));
    // 0x2ea9f4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ea9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ea9f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA9F8u;
    {
        const bool branch_taken_0x2ea9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea9f8) {
            ctx->pc = 0x2EA9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA9F8u;
            // 0x2ea9fc: 0xaf859088  sw          $a1, -0x6F78($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAA00u;
            goto label_2eaa00;
        }
    }
    ctx->pc = 0x2EAA00u;
label_2eaa00:
    // 0x2eaa00: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2eaa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2eaa04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAA04u;
    {
        const bool branch_taken_0x2eaa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA04u;
        // 0x2eaa08: 0x8f829088  lw          $v0, -0x6F78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa04) {
            ctx->pc = 0x2EAA14u;
            goto label_2eaa14;
        }
    }
    ctx->pc = 0x2EAA0Cu;
    // 0x2eaa0c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2eaa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2eaa10: 0xaf829088  sw          $v0, -0x6F78($gp)
    ctx->pc = 0x2eaa10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 2));
label_2eaa14:
    // 0x2eaa14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eaa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2eaa18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2eaa18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa1c: 0x2444e5c0  addiu       $a0, $v0, -0x1A40
    ctx->pc = 0x2eaa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x2eaa20: 0x26530d40  addiu       $s3, $s2, 0xD40
    ctx->pc = 0x2eaa20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x2eaa24: 0x265413bf  addiu       $s4, $s2, 0x13BF
    ctx->pc = 0x2eaa24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 5055));
    // 0x2eaa28: 0x26450640  addiu       $a1, $s2, 0x640
    ctx->pc = 0x2eaa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    // 0x2eaa2c: 0x0  nop
    ctx->pc = 0x2eaa2cu;
    // NOP
label_2eaa30:
    // 0x2eaa30: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2eaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2eaa34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eaa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eaa38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2eaa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2eaa3c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2eaa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eaa40: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x2eaa40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2eaa44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EAA44u;
    {
        const bool branch_taken_0x2eaa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA44u;
        // 0x2eaa48: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa44) {
            ctx->pc = 0x2EAA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaa30;
        }
    }
    ctx->pc = 0x2EAA4Cu;
    // 0x2eaa4c: 0x8f829088  lw          $v0, -0x6F78($gp)
    ctx->pc = 0x2eaa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
    // 0x2eaa50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAA50u;
    {
        const bool branch_taken_0x2eaa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA50u;
        // 0x2eaa54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa50) {
            ctx->pc = 0x2EAA60u;
            goto label_2eaa60;
        }
    }
    ctx->pc = 0x2EAA58u;
    // 0x2eaa58: 0xc0bab48  jal         func_2EAD20
    ctx->pc = 0x2EAA58u;
    SET_GPR_U32(ctx, 31, 0x2EAA60u);
    ctx->pc = 0x2EAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA58u;
    // 0x2eaa5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAD20u, 0x2EAA58u, 0x2EAA60u)) {
        return;
    }
    ctx->pc = 0x2EAA60u;
label_2eaa60:
    // 0x2eaa60: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2eaa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2eaa64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eaa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa68: 0x2484a470  addiu       $a0, $a0, -0x5B90
    ctx->pc = 0x2eaa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943856));
    // 0x2eaa6c: 0xc0ba294  jal         func_2E8A50
    ctx->pc = 0x2EAA6Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA74u);
    ctx->pc = 0x2EAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA6Cu;
    // 0x2eaa70: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8A50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8A50u, 0x2EAA6Cu, 0x2EAA74u)) {
        return;
    }
    ctx->pc = 0x2EAA74u;
label_2eaa74:
    // 0x2eaa74: 0x8e2a13a0  lw          $t2, 0x13A0($s1)
    ctx->pc = 0x2eaa74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5024)));
    // 0x2eaa78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa7c: 0x8f8b9088  lw          $t3, -0x6F78($gp)
    ctx->pc = 0x2eaa7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
    // 0x2eaa80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eaa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa84: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x2eaa84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
    // 0x2eaa88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaa88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa8c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2eaa8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2eaa90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eaa90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa94: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EAA94u;
    SET_GPR_U32(ctx, 31, 0x2EAA9Cu);
    ctx->pc = 0x2EAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA94u;
    // 0x2eaa98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EAA94u, 0x2EAA9Cu)) {
        return;
    }
    ctx->pc = 0x2EAA9Cu;
label_2eaa9c:
    // 0x2eaa9c: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x2eaa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    // 0x2eaaa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EAAA0u;
    {
        const bool branch_taken_0x2eaaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAA0u;
        // 0x2eaaa4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaaa0) {
            ctx->pc = 0x2EAABCu;
            goto label_2eaabc;
        }
    }
    ctx->pc = 0x2EAAA8u;
label_2eaaa8:
    // 0x2eaaa8: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2EAAA8u;
    SET_GPR_U32(ctx, 31, 0x2EAAB0u);
    ctx->pc = 0x2EAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAA8u;
    // 0x2eaaac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2EAAA8u, 0x2EAAB0u)) {
        return;
    }
    ctx->pc = 0x2EAAB0u;
label_2eaab0:
    // 0x2eaab0: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x2eaab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    // 0x2eaab4: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2EAAB4u;
    {
        const bool branch_taken_0x2eaab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAB4u;
        // 0x2eaab8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaab4) {
            ctx->pc = 0x2EAAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaaa8;
        }
    }
    ctx->pc = 0x2EAABCu;
label_2eaabc:
    // 0x2eaabc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaac0: 0xaf908c90  sw          $s0, -0x7370($gp)
    ctx->pc = 0x2eaac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 16));
    // 0x2eaac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eaac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaac8: 0xaf908c94  sw          $s0, -0x736C($gp)
    ctx->pc = 0x2eaac8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937748), GPR_U32(ctx, 16));
    // 0x2eaacc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaad0: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x2eaad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eaad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eaad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaadc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eaadcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaae0: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EAAE0u;
    SET_GPR_U32(ctx, 31, 0x2EAAE8u);
    ctx->pc = 0x2EAAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAE0u;
    // 0x2eaae4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EAAE0u, 0x2EAAE8u)) {
        return;
    }
    ctx->pc = 0x2EAAE8u;
label_2eaae8:
    // 0x2eaae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAAE8u;
    {
        const bool branch_taken_0x2eaae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaae8) {
            ctx->pc = 0x2EAAF8u;
            goto label_2eaaf8;
        }
    }
    ctx->pc = 0x2EAAF0u;
label_2eaaf0:
    // 0x2eaaf0: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2EAAF0u;
    SET_GPR_U32(ctx, 31, 0x2EAAF8u);
    ctx->pc = 0x2EAAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAF0u;
    // 0x2eaaf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2EAAF0u, 0x2EAAF8u)) {
        return;
    }
    ctx->pc = 0x2EAAF8u;
label_2eaaf8:
    // 0x2eaaf8: 0x8f838c90  lw          $v1, -0x7370($gp)
    ctx->pc = 0x2eaaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x2eaafc: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAAFCu;
    {
        const bool branch_taken_0x2eaafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2eaafc) {
            ctx->pc = 0x2EAB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAAFCu;
            // 0x2eab00: 0xae2013a4  sw          $zero, 0x13A4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAB14u;
            goto label_2eab14;
        }
    }
    ctx->pc = 0x2EAB04u;
    // 0x2eab04: 0x8f828c94  lw          $v0, -0x736C($gp)
    ctx->pc = 0x2eab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937748)));
    // 0x2eab08: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EAB08u;
    {
        const bool branch_taken_0x2eab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eab08) {
            ctx->pc = 0x2EAAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaaf0;
        }
    }
    ctx->pc = 0x2EAB10u;
    // 0x2eab10: 0xae2013a4  sw          $zero, 0x13A4($s1)
    ctx->pc = 0x2eab10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5028), GPR_U32(ctx, 0));
label_2eab14:
    // 0x2eab14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eab14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab18: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2EAB18u;
    SET_GPR_U32(ctx, 31, 0x2EAB20u);
    ctx->pc = 0x2EAB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB18u;
    // 0x2eab1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EAB18u, 0x2EAB20u)) {
        return;
    }
    ctx->pc = 0x2EAB20u;
label_2eab20:
    // 0x2eab20: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2eab20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eab28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eab2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab30: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2eab30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eab34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eab34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eab38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab3c: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB44u);
    ctx->pc = 0x2EAB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB3Cu;
    // 0x2eab40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EAB3Cu, 0x2EAB44u)) {
        return;
    }
    ctx->pc = 0x2EAB44u;
label_2eab44:
    // 0x2eab44: 0x8e2213a4  lw          $v0, 0x13A4($s1)
    ctx->pc = 0x2eab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5028)));
    // 0x2eab48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EAB48u;
    {
        const bool branch_taken_0x2eab48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eab48) {
            ctx->pc = 0x2EAB64u;
            goto label_2eab64;
        }
    }
    ctx->pc = 0x2EAB50u;
label_2eab50:
    // 0x2eab50: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2EAB50u;
    SET_GPR_U32(ctx, 31, 0x2EAB58u);
    ctx->pc = 0x2EAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB50u;
    // 0x2eab54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2EAB50u, 0x2EAB58u)) {
        return;
    }
    ctx->pc = 0x2EAB58u;
label_2eab58:
    // 0x2eab58: 0x8e2213a4  lw          $v0, 0x13A4($s1)
    ctx->pc = 0x2eab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5028)));
    // 0x2eab5c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2EAB5Cu;
    {
        const bool branch_taken_0x2eab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab5c) {
            ctx->pc = 0x2EAB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eab50;
        }
    }
    ctx->pc = 0x2EAB64u;
label_2eab64:
    // 0x2eab64: 0xc0bb62c  jal         func_2ED8B0
    ctx->pc = 0x2EAB64u;
    SET_GPR_U32(ctx, 31, 0x2EAB6Cu);
    ctx->pc = 0x2ED8B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED8B0u, 0x2EAB64u, 0x2EAB6Cu)) {
        return;
    }
    ctx->pc = 0x2EAB6Cu;
label_2eab6c:
    // 0x2eab6c: 0x8f829088  lw          $v0, -0x6F78($gp)
    ctx->pc = 0x2eab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
    // 0x2eab70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eab74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAB74u;
    {
        const bool branch_taken_0x2eab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB74u;
        // 0x2eab78: 0x3c04001c  lui         $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab74) {
            ctx->pc = 0x2EAB84u;
            goto label_2eab84;
        }
    }
    ctx->pc = 0x2EAB7Cu;
    // 0x2eab7c: 0xc0bb614  jal         func_2ED850
    ctx->pc = 0x2EAB7Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB84u);
    ctx->pc = 0x2EAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB7Cu;
    // 0x2eab80: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED850u, 0x2EAB7Cu, 0x2EAB84u)) {
        return;
    }
    ctx->pc = 0x2EAB84u;
label_2eab84:
    // 0x2eab84: 0x8f829088  lw          $v0, -0x6F78($gp)
    ctx->pc = 0x2eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
    // 0x2eab88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2eab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2eab8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAB8Cu;
    {
        const bool branch_taken_0x2eab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB8Cu;
        // 0x2eab90: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab8c) {
            ctx->pc = 0x2EAB9Cu;
            goto label_2eab9c;
        }
    }
    ctx->pc = 0x2EAB94u;
    // 0x2eab94: 0xc0bb614  jal         func_2ED850
    ctx->pc = 0x2EAB94u;
    SET_GPR_U32(ctx, 31, 0x2EAB9Cu);
    ctx->pc = 0x2EAB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB94u;
    // 0x2eab98: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED850u, 0x2EAB94u, 0x2EAB9Cu)) {
        return;
    }
    ctx->pc = 0x2EAB9Cu;
label_2eab9c:
    // 0x2eab9c: 0xa3808cb8  sb          $zero, -0x7348($gp)
    ctx->pc = 0x2eab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937784), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eaba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eaba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eaba4: 0xae221380  sw          $v0, 0x1380($s1)
    ctx->pc = 0x2eaba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4992), GPR_U32(ctx, 2));
    // 0x2eaba8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2eaba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2eabacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eabb0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2eabb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eabb4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2eabb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eabb8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2eabb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eabbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eabbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eabc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eabc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eabc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABC4u;
        // 0x2eabc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EABC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EABCCu;
    // 0x2eabcc: 0x0  nop
    ctx->pc = 0x2eabccu;
    // NOP
    ctx->pc = 0x2eabd0u;
}
