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

// Function: sub_002D4778
// Address: 0x2d4778 - 0x2d4a70
void sub_002D4778_0x2d4778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4778_0x2d4778");
#endif

    switch (ctx->pc) {
        case 0x2d47b4u: goto label_2d47b4;
        case 0x2d4810u: goto label_2d4810;
        case 0x2d489cu: goto label_2d489c;
        default: break;
    }

    ctx->pc = 0x2d4778u;

    // 0x2d4778: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d4778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d477c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2d477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2d4780: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d4780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2d4784: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d4784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2d4788: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2d478c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d4790: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2d4790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2d4794: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2d4794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2d4798: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2d4798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2d479c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d47a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d47a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2d47a4: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x2d47a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2d47a8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2d47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2d47ac: 0xc0b55bc  jal         func_2D56F0
    ctx->pc = 0x2D47ACu;
    SET_GPR_U32(ctx, 31, 0x2D47B4u);
    ctx->pc = 0x2D47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47ACu;
    // 0x2d47b0: 0x248472f0  addiu       $a0, $a0, 0x72F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D56F0u, 0x2D47ACu, 0x2D47B4u)) {
        return;
    }
    ctx->pc = 0x2D47B4u;
label_2d47b4:
    // 0x2d47b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d47b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d47b8: 0x12c0009f  beqz        $s6, . + 4 + (0x9F << 2)
    ctx->pc = 0x2D47B8u;
    {
        const bool branch_taken_0x2d47b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47B8u;
        // 0x2d47bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47b8) {
            ctx->pc = 0x2D4A38u;
            goto label_2d4a38;
        }
    }
    ctx->pc = 0x2D47C0u;
    // 0x2d47c0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2d47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2d47c4: 0x3c181100  lui         $t8, 0x1100
    ctx->pc = 0x2d47c4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4352 << 16));
    // 0x2d47c8: 0x24593038  addiu       $t9, $v0, 0x3038
    ctx->pc = 0x2d47c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 12344));
    // 0x2d47cc: 0x33220007  andi        $v0, $t9, 0x7
    ctx->pc = 0x2d47ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)7);
    // 0x2d47d0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D47D0u;
    {
        const bool branch_taken_0x2d47d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47D0u;
        // 0x2d47d4: 0x37184000  ori         $t8, $t8, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47d0) {
            ctx->pc = 0x2D4864u;
            goto label_2d4864;
        }
    }
    ctx->pc = 0x2D47D8u;
    // 0x2d47d8: 0x27221000  addiu       $v0, $t9, 0x1000
    ctx->pc = 0x2d47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4096));
    // 0x2d47dc: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x2d47dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x2d47e0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2d47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
    // 0x2d47e4: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x2d47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
    // 0x2d47e8: 0x3c060000  lui         $a2, 0x0
    ctx->pc = 0x2d47e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)0 << 16));
    // 0x2d47ec: 0x3c070000  lui         $a3, 0x0
    ctx->pc = 0x2d47ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)0 << 16));
    // 0x2d47f0: 0x3c0e0000  lui         $t6, 0x0
    ctx->pc = 0x2d47f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)0 << 16));
    // 0x2d47f4: 0x3c0c0000  lui         $t4, 0x0
    ctx->pc = 0x2d47f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)0 << 16));
    // 0x2d47f8: 0x3c090000  lui         $t1, 0x0
    ctx->pc = 0x2d47f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)0 << 16));
    // 0x2d47fc: 0x3c0a0000  lui         $t2, 0x0
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)0 << 16));
    // 0x2d4800: 0x3c170000  lui         $s7, 0x0
    ctx->pc = 0x2d4800u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)0 << 16));
    // 0x2d4804: 0x3c080000  lui         $t0, 0x0
    ctx->pc = 0x2d4804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)0 << 16));
    // 0x2d4808: 0x3c0b0000  lui         $t3, 0x0
    ctx->pc = 0x2d4808u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)0 << 16));
    // 0x2d480c: 0x3c1e0000  lui         $fp, 0x0
    ctx->pc = 0x2d480cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)0 << 16));
label_2d4810:
    // 0x2d4810: 0x6b2d0007  ldl         $t5, 0x7($t9)
    ctx->pc = 0x2d4810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2d4814: 0x6f2d0000  ldr         $t5, 0x0($t9)
    ctx->pc = 0x2d4814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2d4818: 0x6b2f000f  ldl         $t7, 0xF($t9)
    ctx->pc = 0x2d4818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x2d481c: 0x6f2f0008  ldr         $t7, 0x8($t9)
    ctx->pc = 0x2d481cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x2d4820: 0x6b310017  ldl         $s1, 0x17($t9)
    ctx->pc = 0x2d4820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2d4824: 0x6f310010  ldr         $s1, 0x10($t9)
    ctx->pc = 0x2d4824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2d4828: 0x6b32001f  ldl         $s2, 0x1F($t9)
    ctx->pc = 0x2d4828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x2d482c: 0x6f320018  ldr         $s2, 0x18($t9)
    ctx->pc = 0x2d482cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2d4830: 0xb30d0007  sdl         $t5, 0x7($t8)
    ctx->pc = 0x2d4830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4834: 0xb70d0000  sdr         $t5, 0x0($t8)
    ctx->pc = 0x2d4834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4838: 0xb30f000f  sdl         $t7, 0xF($t8)
    ctx->pc = 0x2d4838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d483c: 0xb70f0008  sdr         $t7, 0x8($t8)
    ctx->pc = 0x2d483cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4840: 0xb3110017  sdl         $s1, 0x17($t8)
    ctx->pc = 0x2d4840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4844: 0xb7110010  sdr         $s1, 0x10($t8)
    ctx->pc = 0x2d4844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4848: 0xb312001f  sdl         $s2, 0x1F($t8)
    ctx->pc = 0x2d4848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d484c: 0xb7120018  sdr         $s2, 0x18($t8)
    ctx->pc = 0x2d484cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4850: 0x27390020  addiu       $t9, $t9, 0x20
    ctx->pc = 0x2d4850u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
    // 0x2d4854: 0x1722ffee  bne         $t9, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D4854u;
    {
        const bool branch_taken_0x2d4854 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4854u;
        // 0x2d4858: 0x27180020  addiu       $t8, $t8, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4854) {
            ctx->pc = 0x2D4810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4810;
        }
    }
    ctx->pc = 0x2D485Cu;
    // 0x2d485c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D485Cu;
    {
        const bool branch_taken_0x2d485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D485Cu;
        // 0x2d4860: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d485c) {
            ctx->pc = 0x2D48CCu;
            goto label_2d48cc;
        }
    }
    ctx->pc = 0x2D4864u;
label_2d4864:
    // 0x2d4864: 0x27221000  addiu       $v0, $t9, 0x1000
    ctx->pc = 0x2d4864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4096));
    // 0x2d4868: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x2d4868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x2d486c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2d486cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
    // 0x2d4870: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x2d4870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
    // 0x2d4874: 0x3c060000  lui         $a2, 0x0
    ctx->pc = 0x2d4874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)0 << 16));
    // 0x2d4878: 0x3c070000  lui         $a3, 0x0
    ctx->pc = 0x2d4878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)0 << 16));
    // 0x2d487c: 0x3c0e0000  lui         $t6, 0x0
    ctx->pc = 0x2d487cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)0 << 16));
    // 0x2d4880: 0x3c0c0000  lui         $t4, 0x0
    ctx->pc = 0x2d4880u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)0 << 16));
    // 0x2d4884: 0x3c090000  lui         $t1, 0x0
    ctx->pc = 0x2d4884u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)0 << 16));
    // 0x2d4888: 0x3c0a0000  lui         $t2, 0x0
    ctx->pc = 0x2d4888u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)0 << 16));
    // 0x2d488c: 0x3c170000  lui         $s7, 0x0
    ctx->pc = 0x2d488cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)0 << 16));
    // 0x2d4890: 0x3c080000  lui         $t0, 0x0
    ctx->pc = 0x2d4890u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)0 << 16));
    // 0x2d4894: 0x3c0b0000  lui         $t3, 0x0
    ctx->pc = 0x2d4894u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)0 << 16));
    // 0x2d4898: 0x3c1e0000  lui         $fp, 0x0
    ctx->pc = 0x2d4898u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)0 << 16));
label_2d489c:
    // 0x2d489c: 0xdf2d0000  ld          $t5, 0x0($t9)
    ctx->pc = 0x2d489cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2d48a0: 0xdf2f0008  ld          $t7, 0x8($t9)
    ctx->pc = 0x2d48a0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2d48a4: 0xdf310010  ld          $s1, 0x10($t9)
    ctx->pc = 0x2d48a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2d48a8: 0xdf320018  ld          $s2, 0x18($t9)
    ctx->pc = 0x2d48a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x2d48ac: 0xff0d0000  sd          $t5, 0x0($t8)
    ctx->pc = 0x2d48acu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 13));
    // 0x2d48b0: 0xff0f0008  sd          $t7, 0x8($t8)
    ctx->pc = 0x2d48b0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 15));
    // 0x2d48b4: 0xff110010  sd          $s1, 0x10($t8)
    ctx->pc = 0x2d48b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 17));
    // 0x2d48b8: 0xff120018  sd          $s2, 0x18($t8)
    ctx->pc = 0x2d48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 18));
    // 0x2d48bc: 0x27390020  addiu       $t9, $t9, 0x20
    ctx->pc = 0x2d48bcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
    // 0x2d48c0: 0x1722fff6  bne         $t9, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D48C0u;
    {
        const bool branch_taken_0x2d48c0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48C0u;
        // 0x2d48c4: 0x27180020  addiu       $t8, $t8, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d48c0) {
            ctx->pc = 0x2D489Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d489c;
        }
    }
    ctx->pc = 0x2D48C8u;
    // 0x2d48c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d48cc:
    // 0x2d48cc: 0x24780000  addiu       $t8, $v1, 0x0
    ctx->pc = 0x2d48ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x2d48d0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d48d4: 0x1868c2  srl         $t5, $t8, 3
    ctx->pc = 0x2d48d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 3));
    // 0x2d48d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d48dc: 0x490c2  srl         $s2, $a0, 3
    ctx->pc = 0x2d48dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2d48e0: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x2d48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0 << 16));
    // 0x2d48e4: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x2d48e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2d48e8: 0x24580c80  addiu       $t8, $v0, 0xC80
    ctx->pc = 0x2d48e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2d48ec: 0x25c40250  addiu       $a0, $t6, 0x250
    ctx->pc = 0x2d48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 592));
    // 0x2d48f0: 0x6a0c2  srl         $s4, $a2, 3
    ctx->pc = 0x2d48f0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x2d48f4: 0x470c2  srl         $t6, $a0, 3
    ctx->pc = 0x2d48f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2d48f8: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x2d48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0 << 16));
    // 0x2d48fc: 0x252602c0  addiu       $a2, $t1, 0x2C0
    ctx->pc = 0x2d48fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 704));
    // 0x2d4900: 0x24440d10  addiu       $a0, $v0, 0xD10
    ctx->pc = 0x2d4900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3344));
    // 0x2d4904: 0x680c2  srl         $s0, $a2, 3
    ctx->pc = 0x2d4904u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x2d4908: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2d4908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d490c: 0x25060d50  addiu       $a2, $t0, 0xD50
    ctx->pc = 0x2d490cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3408));
    // 0x2d4910: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d4910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4914: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x2d4914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x2d4918: 0x598c2  srl         $s3, $a1, 3
    ctx->pc = 0x2d4918u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2d491c: 0x1840c2  srl         $t0, $t8, 3
    ctx->pc = 0x2d491cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 24), 3));
    // 0x2d4920: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x2d4920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0 << 16));
    // 0x2d4924: 0x25850270  addiu       $a1, $t4, 0x270
    ctx->pc = 0x2d4924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 624));
    // 0x2d4928: 0x24e70158  addiu       $a3, $a3, 0x158
    ctx->pc = 0x2d4928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 344));
    // 0x2d492c: 0x24580830  addiu       $t8, $v0, 0x830
    ctx->pc = 0x2d492cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
    // 0x2d4930: 0x7a8c2  srl         $s5, $a3, 3
    ctx->pc = 0x2d4930u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x2d4934: 0x578c2  srl         $t7, $a1, 3
    ctx->pc = 0x2d4934u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2d4938: 0x448c2  srl         $t1, $a0, 3
    ctx->pc = 0x2d4938u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2d493c: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x2d493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0 << 16));
    // 0x2d4940: 0x25470300  addiu       $a3, $t2, 0x300
    ctx->pc = 0x2d4940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 768));
    // 0x2d4944: 0x26e50d20  addiu       $a1, $s7, 0xD20
    ctx->pc = 0x2d4944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3360));
    // 0x2d4948: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x2d4948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x2d494c: 0x788c2  srl         $s1, $a3, 3
    ctx->pc = 0x2d494cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x2d4950: 0x550c2  srl         $t2, $a1, 3
    ctx->pc = 0x2d4950u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2d4954: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x2d4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0 << 16));
    // 0x2d4958: 0x25670d80  addiu       $a3, $t3, 0xD80
    ctx->pc = 0x2d4958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 3456));
    // 0x2d495c: 0x24450858  addiu       $a1, $v0, 0x858
    ctx->pc = 0x2d495cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2d4960: 0x658c2  srl         $t3, $a2, 3
    ctx->pc = 0x2d4960u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x2d4964: 0x760c2  srl         $t4, $a3, 3
    ctx->pc = 0x2d4964u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x2d4968: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x2d4968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0 << 16));
    // 0x2d496c: 0xc4604014  lwc1        $f0, 0x4014($v1)
    ctx->pc = 0x2d496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4970: 0x24460918  addiu       $a2, $v0, 0x918
    ctx->pc = 0x2d4970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2328));
    // 0x2d4974: 0x27c70ad0  addiu       $a3, $fp, 0xAD0
    ctx->pc = 0x2d4974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 2768));
    // 0x2d4978: 0x1818c2  srl         $v1, $t8, 3
    ctx->pc = 0x2d4978u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 24), 3));
    // 0x2d497c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x2d497cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2d4980: 0x528c2  srl         $a1, $a1, 3
    ctx->pc = 0x2d4980u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2d4984: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x2d4984u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x2d4988: 0x738c2  srl         $a3, $a3, 3
    ctx->pc = 0x2d4988u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x2d498c: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4990: 0xe4204008  swc1        $f0, 0x4008($at)
    ctx->pc = 0x2d4990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x11004008u, bits); }
    // 0x2d4994: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4998: 0xac2d4710  sw          $t5, 0x4710($at)
    ctx->pc = 0x2d4998u;
    runtime->Store32(rdram, ctx, 0x11004710u, GPR_U32(ctx, 13)); // MMIO: 0x11004710
    // 0x2d499c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2d499cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49a0: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49a4: 0xac324720  sw          $s2, 0x4720($at)
    ctx->pc = 0x2d49a4u;
    runtime->Store32(rdram, ctx, 0x11004720u, GPR_U32(ctx, 18)); // MMIO: 0x11004720
    // 0x2d49a8: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49ac: 0xac334730  sw          $s3, 0x4730($at)
    ctx->pc = 0x2d49acu;
    runtime->Store32(rdram, ctx, 0x11004730u, GPR_U32(ctx, 19)); // MMIO: 0x11004730
    // 0x2d49b0: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49b4: 0xac344740  sw          $s4, 0x4740($at)
    ctx->pc = 0x2d49b4u;
    runtime->Store32(rdram, ctx, 0x11004740u, GPR_U32(ctx, 20)); // MMIO: 0x11004740
    // 0x2d49b8: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49bc: 0xac354750  sw          $s5, 0x4750($at)
    ctx->pc = 0x2d49bcu;
    runtime->Store32(rdram, ctx, 0x11004750u, GPR_U32(ctx, 21)); // MMIO: 0x11004750
    // 0x2d49c0: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49c4: 0xac2e47a0  sw          $t6, 0x47A0($at)
    ctx->pc = 0x2d49c4u;
    runtime->Store32(rdram, ctx, 0x110047A0u, GPR_U32(ctx, 14)); // MMIO: 0x110047a0
    // 0x2d49c8: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49cc: 0xac2f47b0  sw          $t7, 0x47B0($at)
    ctx->pc = 0x2d49ccu;
    runtime->Store32(rdram, ctx, 0x110047B0u, GPR_U32(ctx, 15)); // MMIO: 0x110047b0
    // 0x2d49d0: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49d4: 0xac3047c0  sw          $s0, 0x47C0($at)
    ctx->pc = 0x2d49d4u;
    runtime->Store32(rdram, ctx, 0x110047C0u, GPR_U32(ctx, 16)); // MMIO: 0x110047c0
    // 0x2d49d8: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49dc: 0xac3147d0  sw          $s1, 0x47D0($at)
    ctx->pc = 0x2d49dcu;
    runtime->Store32(rdram, ctx, 0x110047D0u, GPR_U32(ctx, 17)); // MMIO: 0x110047d0
    // 0x2d49e0: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49e4: 0xac284610  sw          $t0, 0x4610($at)
    ctx->pc = 0x2d49e4u;
    runtime->Store32(rdram, ctx, 0x11004610u, GPR_U32(ctx, 8)); // MMIO: 0x11004610
    // 0x2d49e8: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49ec: 0xac294620  sw          $t1, 0x4620($at)
    ctx->pc = 0x2d49ecu;
    runtime->Store32(rdram, ctx, 0x11004620u, GPR_U32(ctx, 9)); // MMIO: 0x11004620
    // 0x2d49f0: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49f4: 0xac2a4630  sw          $t2, 0x4630($at)
    ctx->pc = 0x2d49f4u;
    runtime->Store32(rdram, ctx, 0x11004630u, GPR_U32(ctx, 10)); // MMIO: 0x11004630
    // 0x2d49f8: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d49f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d49fc: 0xac2b4640  sw          $t3, 0x4640($at)
    ctx->pc = 0x2d49fcu;
    runtime->Store32(rdram, ctx, 0x11004640u, GPR_U32(ctx, 11)); // MMIO: 0x11004640
    // 0x2d4a00: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a04: 0xac2c4650  sw          $t4, 0x4650($at)
    ctx->pc = 0x2d4a04u;
    runtime->Store32(rdram, ctx, 0x11004650u, GPR_U32(ctx, 12)); // MMIO: 0x11004650
    // 0x2d4a08: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a0c: 0xac234810  sw          $v1, 0x4810($at)
    ctx->pc = 0x2d4a0cu;
    runtime->Store32(rdram, ctx, 0x11004810u, GPR_U32(ctx, 3)); // MMIO: 0x11004810
    // 0x2d4a10: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a14: 0xac244820  sw          $a0, 0x4820($at)
    ctx->pc = 0x2d4a14u;
    runtime->Store32(rdram, ctx, 0x11004820u, GPR_U32(ctx, 4)); // MMIO: 0x11004820
    // 0x2d4a18: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a1c: 0xac254830  sw          $a1, 0x4830($at)
    ctx->pc = 0x2d4a1cu;
    runtime->Store32(rdram, ctx, 0x11004830u, GPR_U32(ctx, 5)); // MMIO: 0x11004830
    // 0x2d4a20: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a24: 0xac264840  sw          $a2, 0x4840($at)
    ctx->pc = 0x2d4a24u;
    runtime->Store32(rdram, ctx, 0x11004840u, GPR_U32(ctx, 6)); // MMIO: 0x11004840
    // 0x2d4a28: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a2c: 0xac274850  sw          $a3, 0x4850($at)
    ctx->pc = 0x2d4a2cu;
    runtime->Store32(rdram, ctx, 0x11004850u, GPR_U32(ctx, 7)); // MMIO: 0x11004850
    // 0x2d4a30: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a34: 0xac204790  sw          $zero, 0x4790($at)
    ctx->pc = 0x2d4a34u;
    runtime->Store32(rdram, ctx, 0x11004790u, GPR_U32(ctx, 0)); // MMIO: 0x11004790
label_2d4a38:
    // 0x2d4a38: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d4a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4a3c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d4a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4a40: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d4a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4a44: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d4a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4a48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d4a48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4a4c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2d4a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4a50: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2d4a50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4a54: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2d4a54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4a58: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2d4a58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4a60: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A60u;
        // 0x2d4a64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4A68u;
    // 0x2d4a68: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2d4a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d4a6c: 0x0  nop
    ctx->pc = 0x2d4a6cu;
    // NOP
    ctx->pc = 0x2d4a70u;
}
