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

// Function: sub_001DE720
// Address: 0x1de720 - 0x1dede0
void sub_001DE720_0x1de720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE720_0x1de720");
#endif

    switch (ctx->pc) {
        case 0x1de7acu: goto label_1de7ac;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de81cu: goto label_1de81c;
        case 0x1de834u: goto label_1de834;
        case 0x1de8a0u: goto label_1de8a0;
        case 0x1de928u: goto label_1de928;
        case 0x1de934u: goto label_1de934;
        case 0x1de95cu: goto label_1de95c;
        case 0x1dea78u: goto label_1dea78;
        case 0x1deae0u: goto label_1deae0;
        case 0x1deb50u: goto label_1deb50;
        case 0x1dec60u: goto label_1dec60;
        case 0x1dec6cu: goto label_1dec6c;
        case 0x1dec80u: goto label_1dec80;
        case 0x1ded8cu: goto label_1ded8c;
        case 0x1ded98u: goto label_1ded98;
        case 0x1dedacu: goto label_1dedac;
        default: break;
    }

    ctx->pc = 0x1de720u;

    // 0x1de720: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1de720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1de724: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1de724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1de728: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1de728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1de72c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1de72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1de730: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1de730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1de734: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de738: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1de738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1de73c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1de73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1de740: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1de740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de744: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1de744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1de748: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1de748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1de74c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1de74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1de750: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1de750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1de754: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1de754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1de758: 0x24481c30  addiu       $t0, $v0, 0x1C30
    ctx->pc = 0x1de758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7216));
    // 0x1de75c: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1de75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1de760: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1de760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1de764: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1de764u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6A1C38u));
    // 0x1de768: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1de768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de76c: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1de76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de770: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1de770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1de774: 0x24661c40  addiu       $a2, $v1, 0x1C40
    ctx->pc = 0x1de774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7232));
    // 0x1de778: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1de778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1de77c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1de77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1de780: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1de780u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6A1C48u));
    // 0x1de784: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1de784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de788: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1de788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de78c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1de78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1de790: 0x12600186  beqz        $s3, . + 4 + (0x186 << 2)
    ctx->pc = 0x1DE790u;
    {
        const bool branch_taken_0x1de790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE790u;
        // 0x1de794: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de790) {
            ctx->pc = 0x1DEDACu;
            goto label_1dedac;
        }
    }
    ctx->pc = 0x1DE798u;
    // 0x1de798: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1de798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1de79c: 0x10800184  beqz        $a0, . + 4 + (0x184 << 2)
    ctx->pc = 0x1DE79Cu;
    {
        const bool branch_taken_0x1de79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE79Cu;
        // 0x1de7a0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de79c) {
            ctx->pc = 0x1DEDB0u;
            goto label_1dedb0;
        }
    }
    ctx->pc = 0x1DE7A4u;
    // 0x1de7a4: 0xc08994a  jal         func_226528
    ctx->pc = 0x1DE7A4u;
    SET_GPR_U32(ctx, 31, 0x1DE7ACu);
    ctx->pc = 0x1DE7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7A4u;
    // 0x1de7a8: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x1DE7A4u, 0x1DE7ACu)) {
        return;
    }
    ctx->pc = 0x1DE7ACu;
label_1de7ac:
    // 0x1de7ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7b0: 0xc08994a  jal         func_226528
    ctx->pc = 0x1DE7B0u;
    SET_GPR_U32(ctx, 31, 0x1DE7B8u);
    ctx->pc = 0x1DE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7B0u;
    // 0x1de7b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x1DE7B0u, 0x1DE7B8u)) {
        return;
    }
    ctx->pc = 0x1DE7B8u;
label_1de7b8:
    // 0x1de7b8: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x1de7b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1de7bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7c0: 0x8ea2e6c8  lw          $v0, -0x1938($s5)
    ctx->pc = 0x1de7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960840)));
    // 0x1de7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de7c8: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x1de7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1de7cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1de7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1de7d0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DE7D0u;
    {
        const bool branch_taken_0x1de7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D0u;
        // 0x1de7d4: 0x26760010  addiu       $s6, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7d0) {
            ctx->pc = 0x1DE824u;
            goto label_1de824;
        }
    }
    ctx->pc = 0x1DE7D8u;
    // 0x1de7d8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1de7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de7dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE7DCu;
    {
        const bool branch_taken_0x1de7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7DCu;
        // 0x1de7e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7dc) {
            ctx->pc = 0x1DE7F4u;
            goto label_1de7f4;
        }
    }
    ctx->pc = 0x1DE7E4u;
    // 0x1de7e4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE7E4u;
    {
        const bool branch_taken_0x1de7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7E4u;
        // 0x1de7e8: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7e4) {
            ctx->pc = 0x1DE80Cu;
            goto label_1de80c;
        }
    }
    ctx->pc = 0x1DE7ECu;
    // 0x1de7ec: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x1DE7ECu;
    {
        const bool branch_taken_0x1de7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7ECu;
        // 0x1de7f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7ec) {
            ctx->pc = 0x1DEDA0u;
            goto label_1deda0;
        }
    }
    ctx->pc = 0x1DE7F4u;
label_1de7f4:
    // 0x1de7f4: 0x1082009c  beq         $a0, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x1DE7F4u;
    {
        const bool branch_taken_0x1de7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7F4u;
        // 0x1de7f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7f4) {
            ctx->pc = 0x1DEA68u;
            goto label_1dea68;
        }
    }
    ctx->pc = 0x1DE7FCu;
    // 0x1de7fc: 0x1082011d  beq         $a0, $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x1DE7FCu;
    {
        const bool branch_taken_0x1de7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7FCu;
        // 0x1de800: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7fc) {
            ctx->pc = 0x1DEC74u;
            goto label_1dec74;
        }
    }
    ctx->pc = 0x1DE804u;
    // 0x1de804: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x1DE804u;
    {
        const bool branch_taken_0x1de804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE804u;
        // 0x1de808: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de804) {
            ctx->pc = 0x1DED9Cu;
            goto label_1ded9c;
        }
    }
    ctx->pc = 0x1DE80Cu;
label_1de80c:
    // 0x1de80c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1de80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de810: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1de810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de814: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x1DE814u;
    SET_GPR_U32(ctx, 31, 0x1DE81Cu);
    ctx->pc = 0x1DE818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE814u;
    // 0x1de818: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x1DE814u, 0x1DE81Cu)) {
        return;
    }
    ctx->pc = 0x1DE81Cu;
label_1de81c:
    // 0x1de81c: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x1DE81Cu;
    {
        const bool branch_taken_0x1de81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE81Cu;
        // 0x1de820: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de81c) {
            ctx->pc = 0x1DED9Cu;
            goto label_1ded9c;
        }
    }
    ctx->pc = 0x1DE824u;
label_1de824:
    // 0x1de824: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1de824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1de828: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1de828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de82c: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1DE82Cu;
    SET_GPR_U32(ctx, 31, 0x1DE834u);
    ctx->pc = 0x1DE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE82Cu;
    // 0x1de830: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1DE82Cu, 0x1DE834u)) {
        return;
    }
    ctx->pc = 0x1DE834u;
label_1de834:
    // 0x1de834: 0x6a270037  ldl         $a3, 0x37($s1)
    ctx->pc = 0x1de834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1de838: 0x6e270030  ldr         $a3, 0x30($s1)
    ctx->pc = 0x1de838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1de83c: 0x8e280038  lw          $t0, 0x38($s1)
    ctx->pc = 0x1de83cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1de840: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x1de840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de844: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x1de844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de848: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x1de848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    // 0x1de84c: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x1de84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1de850: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x1de850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1de854: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1de858: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1de858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de85c: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1de85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de860: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1de860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1de864: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x1de864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de868: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x1de868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1de86c: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x1de86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de870: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1de870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de874: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x1de874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1de878: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1de878u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1de87c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1de87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de880: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1de880u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1de884: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1de884u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1de888: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1de888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1de88c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1de88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1de890: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x1de890u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1de894: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de898: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1DE898u;
    SET_GPR_U32(ctx, 31, 0x1DE8A0u);
    ctx->pc = 0x1DE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE898u;
    // 0x1de89c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1DE898u, 0x1DE8A0u)) {
        return;
    }
    ctx->pc = 0x1DE8A0u;
label_1de8a0:
    // 0x1de8a0: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x1de8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1de8a4: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x1de8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1de8a8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1de8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de8ac: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x1de8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1de8b0: 0x46072082  mul.s       $f2, $f4, $f7
    ctx->pc = 0x1de8b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1de8b4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1de8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8b8: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x1de8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1de8bc: 0x46060a02  mul.s       $f8, $f1, $f6
    ctx->pc = 0x1de8bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1de8c0: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x1de8c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1de8c4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1de8c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1de8c8: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x1de8c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1de8cc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1de8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1de8d0: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x1de8d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x1de8d4: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1de8d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1de8d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1de8d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de8dc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1de8dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1de8e0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1de8e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1de8e4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1de8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1de8e8: 0x46033102  mul.s       $f4, $f6, $f3
    ctx->pc = 0x1de8e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1de8ec: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x1de8ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1de8f0: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x1de8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1de8f4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1de8f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1de8f8: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x1de8f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1de8fc: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x1de8fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x1de900: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x1de900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x1de904: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x1de904u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x1de908: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x1de908u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x1de90c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1de90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1de910: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1de910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1de914: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1de914u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1de918: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1de918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de920: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1DE920u;
    SET_GPR_U32(ctx, 31, 0x1DE928u);
    ctx->pc = 0x1DE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE920u;
    // 0x1de924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1DE920u, 0x1DE928u)) {
        return;
    }
    ctx->pc = 0x1DE928u;
label_1de928:
    // 0x1de928: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1de928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de92c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1DE92Cu;
    SET_GPR_U32(ctx, 31, 0x1DE934u);
    ctx->pc = 0x1DE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE92Cu;
    // 0x1de930: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1DE92Cu, 0x1DE934u)) {
        return;
    }
    ctx->pc = 0x1DE934u;
label_1de934:
    // 0x1de934: 0x8ee2e6c8  lw          $v0, -0x1938($s7)
    ctx->pc = 0x1de934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960840)));
    // 0x1de938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de93c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1de93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1de940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de944: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1de944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1de948: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1de948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de94c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1de94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1de950: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1de950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1de954: 0xc092ea4  jal         func_24BA90
    ctx->pc = 0x1DE954u;
    SET_GPR_U32(ctx, 31, 0x1DE95Cu);
    ctx->pc = 0x1DE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE954u;
    // 0x1de958: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x1DE954u, 0x1DE95Cu)) {
        return;
    }
    ctx->pc = 0x1DE95Cu;
label_1de95c:
    // 0x1de95c: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x1de95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1de960: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x1de960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1de964: 0x6ba2002f  ldl         $v0, 0x2F($sp)
    ctx->pc = 0x1de964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1de968: 0x6fa20028  ldr         $v0, 0x28($sp)
    ctx->pc = 0x1de968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1de96c: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x1de96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de970: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x1de970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de974: 0x6ba4003f  ldl         $a0, 0x3F($sp)
    ctx->pc = 0x1de974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1de978: 0x6fa40038  ldr         $a0, 0x38($sp)
    ctx->pc = 0x1de978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1de97c: 0xb2680017  sdl         $t0, 0x17($s3)
    ctx->pc = 0x1de97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de980: 0xb6680010  sdr         $t0, 0x10($s3)
    ctx->pc = 0x1de980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de984: 0xb262001f  sdl         $v0, 0x1F($s3)
    ctx->pc = 0x1de984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de988: 0xb6620018  sdr         $v0, 0x18($s3)
    ctx->pc = 0x1de988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de98c: 0xb2630027  sdl         $v1, 0x27($s3)
    ctx->pc = 0x1de98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de990: 0xb6630020  sdr         $v1, 0x20($s3)
    ctx->pc = 0x1de990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de994: 0xb264002f  sdl         $a0, 0x2F($s3)
    ctx->pc = 0x1de994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de998: 0xb6640028  sdr         $a0, 0x28($s3)
    ctx->pc = 0x1de998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de99c: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x1de99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1de9a0: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x1de9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1de9a4: 0x6ba2004f  ldl         $v0, 0x4F($sp)
    ctx->pc = 0x1de9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1de9a8: 0x6fa20048  ldr         $v0, 0x48($sp)
    ctx->pc = 0x1de9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1de9ac: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x1de9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de9b0: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x1de9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de9b4: 0x6ba4005f  ldl         $a0, 0x5F($sp)
    ctx->pc = 0x1de9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1de9b8: 0x6fa40058  ldr         $a0, 0x58($sp)
    ctx->pc = 0x1de9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1de9bc: 0xb2680037  sdl         $t0, 0x37($s3)
    ctx->pc = 0x1de9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9c0: 0xb6680030  sdr         $t0, 0x30($s3)
    ctx->pc = 0x1de9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9c4: 0xb262003f  sdl         $v0, 0x3F($s3)
    ctx->pc = 0x1de9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9c8: 0xb6620038  sdr         $v0, 0x38($s3)
    ctx->pc = 0x1de9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9cc: 0xb2630047  sdl         $v1, 0x47($s3)
    ctx->pc = 0x1de9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9d0: 0xb6630040  sdr         $v1, 0x40($s3)
    ctx->pc = 0x1de9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9d4: 0xb264004f  sdl         $a0, 0x4F($s3)
    ctx->pc = 0x1de9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9d8: 0xb6640048  sdr         $a0, 0x48($s3)
    ctx->pc = 0x1de9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de9dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9e0: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1de9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1de9e4: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1de9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1de9e8: 0x6ba7002f  ldl         $a3, 0x2F($sp)
    ctx->pc = 0x1de9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1de9ec: 0x6fa70028  ldr         $a3, 0x28($sp)
    ctx->pc = 0x1de9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1de9f0: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x1de9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1de9f4: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x1de9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1de9f8: 0x6ba2003f  ldl         $v0, 0x3F($sp)
    ctx->pc = 0x1de9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1de9fc: 0x6fa20038  ldr         $v0, 0x38($sp)
    ctx->pc = 0x1de9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dea00: 0xb2860007  sdl         $a2, 0x7($s4)
    ctx->pc = 0x1dea00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea04: 0xb6860000  sdr         $a2, 0x0($s4)
    ctx->pc = 0x1dea04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea08: 0xb287000f  sdl         $a3, 0xF($s4)
    ctx->pc = 0x1dea08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea0c: 0xb6870008  sdr         $a3, 0x8($s4)
    ctx->pc = 0x1dea0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea10: 0xb2880017  sdl         $t0, 0x17($s4)
    ctx->pc = 0x1dea10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea14: 0xb6880010  sdr         $t0, 0x10($s4)
    ctx->pc = 0x1dea14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea18: 0xb282001f  sdl         $v0, 0x1F($s4)
    ctx->pc = 0x1dea18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea1c: 0xb6820018  sdr         $v0, 0x18($s4)
    ctx->pc = 0x1dea1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea20: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x1dea20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dea24: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x1dea24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dea28: 0x6ba7004f  ldl         $a3, 0x4F($sp)
    ctx->pc = 0x1dea28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dea2c: 0x6fa70048  ldr         $a3, 0x48($sp)
    ctx->pc = 0x1dea2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dea30: 0x6ba80057  ldl         $t0, 0x57($sp)
    ctx->pc = 0x1dea30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dea34: 0x6fa80050  ldr         $t0, 0x50($sp)
    ctx->pc = 0x1dea34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dea38: 0x6ba2005f  ldl         $v0, 0x5F($sp)
    ctx->pc = 0x1dea38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1dea3c: 0x6fa20058  ldr         $v0, 0x58($sp)
    ctx->pc = 0x1dea3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dea40: 0xb2860027  sdl         $a2, 0x27($s4)
    ctx->pc = 0x1dea40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea44: 0xb6860020  sdr         $a2, 0x20($s4)
    ctx->pc = 0x1dea44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea48: 0xb287002f  sdl         $a3, 0x2F($s4)
    ctx->pc = 0x1dea48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea4c: 0xb6870028  sdr         $a3, 0x28($s4)
    ctx->pc = 0x1dea4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea50: 0xb2880037  sdl         $t0, 0x37($s4)
    ctx->pc = 0x1dea50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea54: 0xb6880030  sdr         $t0, 0x30($s4)
    ctx->pc = 0x1dea54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea58: 0xb282003f  sdl         $v0, 0x3F($s4)
    ctx->pc = 0x1dea58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea5c: 0xb6820038  sdr         $v0, 0x38($s4)
    ctx->pc = 0x1dea5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea60: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1DEA60u;
    {
        const bool branch_taken_0x1dea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA60u;
        // 0x1dea64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea60) {
            ctx->pc = 0x1DEC58u;
            goto label_1dec58;
        }
    }
    ctx->pc = 0x1DEA68u;
label_1dea68:
    // 0x1dea68: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1dea68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1dea6c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1dea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1dea70: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1DEA70u;
    SET_GPR_U32(ctx, 31, 0x1DEA78u);
    ctx->pc = 0x1DEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA70u;
    // 0x1dea74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1DEA70u, 0x1DEA78u)) {
        return;
    }
    ctx->pc = 0x1DEA78u;
label_1dea78:
    // 0x1dea78: 0x6a240037  ldl         $a0, 0x37($s1)
    ctx->pc = 0x1dea78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1dea7c: 0x6e240030  ldr         $a0, 0x30($s1)
    ctx->pc = 0x1dea7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1dea80: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1dea80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1dea84: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x1dea84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea88: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x1dea88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea8c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x1dea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x1dea90: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1dea94: 0x24651c80  addiu       $a1, $v1, 0x1C80
    ctx->pc = 0x1dea94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7296));
    // 0x1dea98: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x1dea98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dea9c: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x1dea9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1deaa0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1deaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6A1C88u));
    // 0x1deaa4: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x1deaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deaa8: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x1deaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deaac: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1deaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1deab0: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x1deab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deab4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1deab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1deab8: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x1deab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1deabc: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x1deabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1deac0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1deac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1deac4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1deac4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1deac8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1deac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1deacc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1deaccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dead0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1dead0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1dead4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dead8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1DEAD8u;
    SET_GPR_U32(ctx, 31, 0x1DEAE0u);
    ctx->pc = 0x1DEADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAD8u;
    // 0x1deadc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1DEAD8u, 0x1DEAE0u)) {
        return;
    }
    ctx->pc = 0x1DEAE0u;
label_1deae0:
    // 0x1deae0: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x1deae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1deae4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1deae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1deae8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1deae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1deaec: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x1deaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1deaf0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1deaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deaf4: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1deaf4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1deaf8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1deaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1deafc: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x1deafcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1deb00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1deb00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1deb04: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1deb04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1deb08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1deb08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1deb0c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1deb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1deb10: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1deb10u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x1deb14: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1deb14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1deb18: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1deb18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1deb1c: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x1deb1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1deb20: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1deb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1deb24: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1deb24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1deb28: 0x8ea2e6c8  lw          $v0, -0x1938($s5)
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960840)));
    // 0x1deb2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1deb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb30: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1deb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1deb34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1deb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1deb38: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1deb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deb3c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1deb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1deb40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1deb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1deb44: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1deb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1deb48: 0xc092ea4  jal         func_24BA90
    ctx->pc = 0x1DEB48u;
    SET_GPR_U32(ctx, 31, 0x1DEB50u);
    ctx->pc = 0x1DEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB48u;
    // 0x1deb4c: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x1DEB48u, 0x1DEB50u)) {
        return;
    }
    ctx->pc = 0x1DEB50u;
label_1deb50:
    // 0x1deb50: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1deb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1deb54: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1deb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1deb58: 0x6ba7002f  ldl         $a3, 0x2F($sp)
    ctx->pc = 0x1deb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1deb5c: 0x6fa70028  ldr         $a3, 0x28($sp)
    ctx->pc = 0x1deb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1deb60: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x1deb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1deb64: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x1deb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1deb68: 0x6ba2003f  ldl         $v0, 0x3F($sp)
    ctx->pc = 0x1deb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1deb6c: 0x6fa20038  ldr         $v0, 0x38($sp)
    ctx->pc = 0x1deb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1deb70: 0xb2660017  sdl         $a2, 0x17($s3)
    ctx->pc = 0x1deb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb74: 0xb6660010  sdr         $a2, 0x10($s3)
    ctx->pc = 0x1deb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb78: 0xb267001f  sdl         $a3, 0x1F($s3)
    ctx->pc = 0x1deb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb7c: 0xb6670018  sdr         $a3, 0x18($s3)
    ctx->pc = 0x1deb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb80: 0xb2680027  sdl         $t0, 0x27($s3)
    ctx->pc = 0x1deb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb84: 0xb6680020  sdr         $t0, 0x20($s3)
    ctx->pc = 0x1deb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb88: 0xb262002f  sdl         $v0, 0x2F($s3)
    ctx->pc = 0x1deb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb8c: 0xb6620028  sdr         $v0, 0x28($s3)
    ctx->pc = 0x1deb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deb90: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x1deb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1deb94: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x1deb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1deb98: 0x6ba7004f  ldl         $a3, 0x4F($sp)
    ctx->pc = 0x1deb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1deb9c: 0x6fa70048  ldr         $a3, 0x48($sp)
    ctx->pc = 0x1deb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1deba0: 0x6ba80057  ldl         $t0, 0x57($sp)
    ctx->pc = 0x1deba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1deba4: 0x6fa80050  ldr         $t0, 0x50($sp)
    ctx->pc = 0x1deba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1deba8: 0x6ba2005f  ldl         $v0, 0x5F($sp)
    ctx->pc = 0x1deba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1debac: 0x6fa20058  ldr         $v0, 0x58($sp)
    ctx->pc = 0x1debacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1debb0: 0xb2660037  sdl         $a2, 0x37($s3)
    ctx->pc = 0x1debb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debb4: 0xb6660030  sdr         $a2, 0x30($s3)
    ctx->pc = 0x1debb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debb8: 0xb267003f  sdl         $a3, 0x3F($s3)
    ctx->pc = 0x1debb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debbc: 0xb6670038  sdr         $a3, 0x38($s3)
    ctx->pc = 0x1debbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debc0: 0xb2680047  sdl         $t0, 0x47($s3)
    ctx->pc = 0x1debc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debc4: 0xb6680040  sdr         $t0, 0x40($s3)
    ctx->pc = 0x1debc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debc8: 0xb262004f  sdl         $v0, 0x4F($s3)
    ctx->pc = 0x1debc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debcc: 0xb6620048  sdr         $v0, 0x48($s3)
    ctx->pc = 0x1debccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1debd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1debd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1debd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1debd8: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x1debd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1debdc: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x1debdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1debe0: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x1debe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1debe4: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x1debe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1debe8: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x1debe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1debec: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x1debecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1debf0: 0x6ba8003f  ldl         $t0, 0x3F($sp)
    ctx->pc = 0x1debf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1debf4: 0x6fa80038  ldr         $t0, 0x38($sp)
    ctx->pc = 0x1debf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1debf8: 0xb2830007  sdl         $v1, 0x7($s4)
    ctx->pc = 0x1debf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1debfc: 0xb6830000  sdr         $v1, 0x0($s4)
    ctx->pc = 0x1debfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec00: 0xb286000f  sdl         $a2, 0xF($s4)
    ctx->pc = 0x1dec00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec04: 0xb6860008  sdr         $a2, 0x8($s4)
    ctx->pc = 0x1dec04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec08: 0xb2870017  sdl         $a3, 0x17($s4)
    ctx->pc = 0x1dec08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec0c: 0xb6870010  sdr         $a3, 0x10($s4)
    ctx->pc = 0x1dec0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec10: 0xb288001f  sdl         $t0, 0x1F($s4)
    ctx->pc = 0x1dec10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec14: 0xb6880018  sdr         $t0, 0x18($s4)
    ctx->pc = 0x1dec14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec18: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x1dec18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1dec1c: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x1dec1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1dec20: 0x6ba6004f  ldl         $a2, 0x4F($sp)
    ctx->pc = 0x1dec20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dec24: 0x6fa60048  ldr         $a2, 0x48($sp)
    ctx->pc = 0x1dec24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dec28: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x1dec28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dec2c: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x1dec2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dec30: 0x6ba8005f  ldl         $t0, 0x5F($sp)
    ctx->pc = 0x1dec30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dec34: 0x6fa80058  ldr         $t0, 0x58($sp)
    ctx->pc = 0x1dec34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dec38: 0xb2830027  sdl         $v1, 0x27($s4)
    ctx->pc = 0x1dec38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec3c: 0xb6830020  sdr         $v1, 0x20($s4)
    ctx->pc = 0x1dec3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec40: 0xb286002f  sdl         $a2, 0x2F($s4)
    ctx->pc = 0x1dec40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec44: 0xb6860028  sdr         $a2, 0x28($s4)
    ctx->pc = 0x1dec44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec48: 0xb2870037  sdl         $a3, 0x37($s4)
    ctx->pc = 0x1dec48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec4c: 0xb6870030  sdr         $a3, 0x30($s4)
    ctx->pc = 0x1dec4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec50: 0xb288003f  sdl         $t0, 0x3F($s4)
    ctx->pc = 0x1dec50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec54: 0xb6880038  sdr         $t0, 0x38($s4)
    ctx->pc = 0x1dec54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1dec58:
    // 0x1dec58: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x1DEC58u;
    SET_GPR_U32(ctx, 31, 0x1DEC60u);
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x1DEC58u, 0x1DEC60u)) {
        return;
    }
    ctx->pc = 0x1DEC60u;
label_1dec60:
    // 0x1dec60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec64: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x1DEC64u;
    SET_GPR_U32(ctx, 31, 0x1DEC6Cu);
    ctx->pc = 0x1DEC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEC64u;
    // 0x1dec68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x1DEC64u, 0x1DEC6Cu)) {
        return;
    }
    ctx->pc = 0x1DEC6Cu;
label_1dec6c:
    // 0x1dec6c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1DEC6Cu;
    {
        const bool branch_taken_0x1dec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC6Cu;
        // 0x1dec70: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec6c) {
            ctx->pc = 0x1DED9Cu;
            goto label_1ded9c;
        }
    }
    ctx->pc = 0x1DEC74u;
label_1dec74:
    // 0x1dec74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1dec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1dec78: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1DEC78u;
    SET_GPR_U32(ctx, 31, 0x1DEC80u);
    ctx->pc = 0x1DEC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEC78u;
    // 0x1dec7c: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1DEC78u, 0x1DEC80u)) {
        return;
    }
    ctx->pc = 0x1DEC80u;
label_1dec80:
    // 0x1dec80: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1dec80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1dec84: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1dec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dec88: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x1dec88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1dec8c: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x1dec8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1dec90: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x1dec90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1dec94: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x1dec94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1dec98: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x1dec98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1dec9c: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x1dec9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1deca0: 0xb2620017  sdl         $v0, 0x17($s3)
    ctx->pc = 0x1deca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deca4: 0xb6620010  sdr         $v0, 0x10($s3)
    ctx->pc = 0x1deca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deca8: 0xb263001f  sdl         $v1, 0x1F($s3)
    ctx->pc = 0x1deca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decac: 0xb6630018  sdr         $v1, 0x18($s3)
    ctx->pc = 0x1decacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decb0: 0xb2640027  sdl         $a0, 0x27($s3)
    ctx->pc = 0x1decb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decb4: 0xb6640020  sdr         $a0, 0x20($s3)
    ctx->pc = 0x1decb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decb8: 0xb265002f  sdl         $a1, 0x2F($s3)
    ctx->pc = 0x1decb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decbc: 0xb6650028  sdr         $a1, 0x28($s3)
    ctx->pc = 0x1decbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decc0: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x1decc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1decc4: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x1decc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1decc8: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x1decc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1deccc: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x1decccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1decd0: 0x6a240037  ldl         $a0, 0x37($s1)
    ctx->pc = 0x1decd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1decd4: 0x6e240030  ldr         $a0, 0x30($s1)
    ctx->pc = 0x1decd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1decd8: 0x6a25003f  ldl         $a1, 0x3F($s1)
    ctx->pc = 0x1decd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1decdc: 0x6e250038  ldr         $a1, 0x38($s1)
    ctx->pc = 0x1decdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1dece0: 0xb2620037  sdl         $v0, 0x37($s3)
    ctx->pc = 0x1dece0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dece4: 0xb6620030  sdr         $v0, 0x30($s3)
    ctx->pc = 0x1dece4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dece8: 0xb263003f  sdl         $v1, 0x3F($s3)
    ctx->pc = 0x1dece8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decec: 0xb6630038  sdr         $v1, 0x38($s3)
    ctx->pc = 0x1dececu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decf0: 0xb2640047  sdl         $a0, 0x47($s3)
    ctx->pc = 0x1decf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decf4: 0xb6640040  sdr         $a0, 0x40($s3)
    ctx->pc = 0x1decf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decf8: 0xb265004f  sdl         $a1, 0x4F($s3)
    ctx->pc = 0x1decf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1decfc: 0xb6650048  sdr         $a1, 0x48($s3)
    ctx->pc = 0x1decfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded00: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x1ded00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ded04: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x1ded04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ded08: 0x6a27000f  ldl         $a3, 0xF($s1)
    ctx->pc = 0x1ded08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ded0c: 0x6e270008  ldr         $a3, 0x8($s1)
    ctx->pc = 0x1ded0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ded10: 0x6a280017  ldl         $t0, 0x17($s1)
    ctx->pc = 0x1ded10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ded14: 0x6e280010  ldr         $t0, 0x10($s1)
    ctx->pc = 0x1ded14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ded18: 0x6a22001f  ldl         $v0, 0x1F($s1)
    ctx->pc = 0x1ded18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ded1c: 0x6e220018  ldr         $v0, 0x18($s1)
    ctx->pc = 0x1ded1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ded20: 0xb2860007  sdl         $a2, 0x7($s4)
    ctx->pc = 0x1ded20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded24: 0xb6860000  sdr         $a2, 0x0($s4)
    ctx->pc = 0x1ded24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded28: 0xb287000f  sdl         $a3, 0xF($s4)
    ctx->pc = 0x1ded28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded2c: 0xb6870008  sdr         $a3, 0x8($s4)
    ctx->pc = 0x1ded2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded30: 0xb2880017  sdl         $t0, 0x17($s4)
    ctx->pc = 0x1ded30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded34: 0xb6880010  sdr         $t0, 0x10($s4)
    ctx->pc = 0x1ded34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded38: 0xb282001f  sdl         $v0, 0x1F($s4)
    ctx->pc = 0x1ded38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded3c: 0xb6820018  sdr         $v0, 0x18($s4)
    ctx->pc = 0x1ded3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded40: 0x6a260027  ldl         $a2, 0x27($s1)
    ctx->pc = 0x1ded40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ded44: 0x6e260020  ldr         $a2, 0x20($s1)
    ctx->pc = 0x1ded44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ded48: 0x6a27002f  ldl         $a3, 0x2F($s1)
    ctx->pc = 0x1ded48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ded4c: 0x6e270028  ldr         $a3, 0x28($s1)
    ctx->pc = 0x1ded4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ded50: 0x6a280037  ldl         $t0, 0x37($s1)
    ctx->pc = 0x1ded50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ded54: 0x6e280030  ldr         $t0, 0x30($s1)
    ctx->pc = 0x1ded54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ded58: 0x6a22003f  ldl         $v0, 0x3F($s1)
    ctx->pc = 0x1ded58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ded5c: 0x6e220038  ldr         $v0, 0x38($s1)
    ctx->pc = 0x1ded5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ded60: 0xb2860027  sdl         $a2, 0x27($s4)
    ctx->pc = 0x1ded60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded64: 0xb6860020  sdr         $a2, 0x20($s4)
    ctx->pc = 0x1ded64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded68: 0xb287002f  sdl         $a3, 0x2F($s4)
    ctx->pc = 0x1ded68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded6c: 0xb6870028  sdr         $a3, 0x28($s4)
    ctx->pc = 0x1ded6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded70: 0xb2880037  sdl         $t0, 0x37($s4)
    ctx->pc = 0x1ded70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded74: 0xb6880030  sdr         $t0, 0x30($s4)
    ctx->pc = 0x1ded74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded78: 0xb282003f  sdl         $v0, 0x3F($s4)
    ctx->pc = 0x1ded78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ded7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ded80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded84: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x1DED84u;
    SET_GPR_U32(ctx, 31, 0x1DED8Cu);
    ctx->pc = 0x1DED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED84u;
    // 0x1ded88: 0xb6820038  sdr         $v0, 0x38($s4) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x1DED84u, 0x1DED8Cu)) {
        return;
    }
    ctx->pc = 0x1DED8Cu;
label_1ded8c:
    // 0x1ded8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ded8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded90: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x1DED90u;
    SET_GPR_U32(ctx, 31, 0x1DED98u);
    ctx->pc = 0x1DED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED90u;
    // 0x1ded94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x1DED90u, 0x1DED98u)) {
        return;
    }
    ctx->pc = 0x1DED98u;
label_1ded98:
    // 0x1ded98: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ded98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1ded9c:
    // 0x1ded9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ded9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1deda0:
    // 0x1deda0: 0x24a5e720  addiu       $a1, $a1, -0x18E0
    ctx->pc = 0x1deda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960928));
    // 0x1deda4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1DEDA4u;
    SET_GPR_U32(ctx, 31, 0x1DEDACu);
    ctx->pc = 0x1DEDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDA4u;
    // 0x1deda8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x1DEDA4u, 0x1DEDACu)) {
        return;
    }
    ctx->pc = 0x1DEDACu;
label_1dedac:
    // 0x1dedac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1dedacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dedb0:
    // 0x1dedb0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1dedb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dedb4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1dedb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dedb8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1dedb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dedbc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1dedbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dedc0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1dedc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dedc4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1dedc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dedc8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1dedc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dedcc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1dedccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dedd0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1dedd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dedd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDD4u;
        // 0x1dedd8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEDDCu;
    // 0x1deddc: 0x0  nop
    ctx->pc = 0x1deddcu;
    // NOP
    ctx->pc = 0x1dede0u;
}
