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

// Function: sub_002B6850
// Address: 0x2b6850 - 0x2b6a08
void sub_002B6850_0x2b6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6850_0x2b6850");
#endif

    switch (ctx->pc) {
        case 0x2b68b0u: goto label_2b68b0;
        case 0x2b6900u: goto label_2b6900;
        case 0x2b69d0u: goto label_2b69d0;
        default: break;
    }

    ctx->pc = 0x2b6850u;

    // 0x2b6850: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2b6850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b6854: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2b6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x2b6858: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2b6858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b685c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b6860: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2b6860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b6864: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2b6864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b6868: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b6868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b686c: 0x68e20017  ldl         $v0, 0x17($a3)
    ctx->pc = 0x2b686cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b6870: 0x6ce20010  ldr         $v0, 0x10($a3)
    ctx->pc = 0x2b6870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b6874: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2b6874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2b6878: 0xb1027ff7  sdl         $v0, 0x7FF7($t0)
    ctx->pc = 0x2b6878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b687c: 0xb5027ff0  sdr         $v0, 0x7FF0($t0)
    ctx->pc = 0x2b687cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b6880: 0xad067ff8  sw          $a2, 0x7FF8($t0)
    ctx->pc = 0x2b6880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32760), GPR_U32(ctx, 6));
    // 0x2b6884: 0x34049830  ori         $a0, $zero, 0x9830
    ctx->pc = 0x2b6884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38960);
    // 0x2b6888: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2b6888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b688c: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2b688cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b6890: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2b6890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2b6894: 0xb1027fe7  sdl         $v0, 0x7FE7($t0)
    ctx->pc = 0x2b6894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b6898: 0xb5027fe0  sdr         $v0, 0x7FE0($t0)
    ctx->pc = 0x2b6898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b689c: 0xad067fe8  sw          $a2, 0x7FE8($t0)
    ctx->pc = 0x2b689cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32744), GPR_U32(ctx, 6));
    // 0x2b68a0: 0x1043821  addu        $a3, $t0, $a0
    ctx->pc = 0x2b68a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b68a4: 0xac654010  sw          $a1, 0x4010($v1)
    ctx->pc = 0x2b68a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16400), GPR_U32(ctx, 5));
    // 0x2b68a8: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x2b68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 9));
    // 0x2b68ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b68acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b68b0:
    // 0x2b68b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b68b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68b4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2b68b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2b68b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b68b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68bc: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x2b68bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2b68c0: 0x2cc20198  sltiu       $v0, $a2, 0x198
    ctx->pc = 0x2b68c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)408) ? 1 : 0);
    // 0x2b68c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B68C4u;
    {
        const bool branch_taken_0x2b68c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C4u;
        // 0x2b68c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68c4) {
            ctx->pc = 0x2B68B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b68b0;
        }
    }
    ctx->pc = 0x2B68CCu;
    // 0x2b68cc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b68d0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2b68d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b68d4: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x2b68d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b68d8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2b68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b68dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b68e0: 0x34038820  ori         $v1, $zero, 0x8820
    ctx->pc = 0x2b68e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34848);
    // 0x2b68e4: 0xa482400e  sh          $v0, 0x400E($a0)
    ctx->pc = 0x2b68e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16398), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b68e8: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x2b68e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b68ec: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x2b68ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b68f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b68f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b68f8: 0xac86181c  sw          $a2, 0x181C($a0)
    ctx->pc = 0x2b68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6172), GPR_U32(ctx, 6));
    // 0x2b68fc: 0x0  nop
    ctx->pc = 0x2b68fcu;
    // NOP
label_2b6900:
    // 0x2b6900: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b6900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6904: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2b6904u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b6908: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b6908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b690c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b690cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b6910: 0x2cc203fe  sltiu       $v0, $a2, 0x3FE
    ctx->pc = 0x2b6910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1022) ? 1 : 0);
    // 0x2b6914: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B6914u;
    {
        const bool branch_taken_0x2b6914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6914u;
        // 0x2b6918: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6914) {
            ctx->pc = 0x2B6900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6900;
        }
    }
    ctx->pc = 0x2B691Cu;
    // 0x2b691c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b691cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b6920: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2b6920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b6924: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2b6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b6928: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x2b6928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b692c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2b692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6930: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b6934: 0xa4850820  sh          $a1, 0x820($a0)
    ctx->pc = 0x2b6934u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2080), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b6938: 0x340283ff  ori         $v0, $zero, 0x83FF
    ctx->pc = 0x2b6938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33791);
    // 0x2b693c: 0xac66181c  sw          $a2, 0x181C($v1)
    ctx->pc = 0x2b693cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6172), GPR_U32(ctx, 6));
    // 0x2b6940: 0xa460181a  sh          $zero, 0x181A($v1)
    ctx->pc = 0x2b6940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6170), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6944: 0xa4621820  sh          $v0, 0x1820($v1)
    ctx->pc = 0x2b6944u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6176), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6948: 0xa462182e  sh          $v0, 0x182E($v1)
    ctx->pc = 0x2b6948u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6190), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b694c: 0xa4621822  sh          $v0, 0x1822($v1)
    ctx->pc = 0x2b694cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6178), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6950: 0xa4621824  sh          $v0, 0x1824($v1)
    ctx->pc = 0x2b6950u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6180), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6954: 0xa4621826  sh          $v0, 0x1826($v1)
    ctx->pc = 0x2b6954u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6182), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6958: 0xa4621828  sh          $v0, 0x1828($v1)
    ctx->pc = 0x2b6958u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6184), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b695c: 0xa462182a  sh          $v0, 0x182A($v1)
    ctx->pc = 0x2b695cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6186), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6960: 0xa462182c  sh          $v0, 0x182C($v1)
    ctx->pc = 0x2b6960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6188), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6964: 0x11200022  beqz        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B6964u;
    {
        const bool branch_taken_0x2b6964 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6964u;
        // 0x2b6968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6964) {
            ctx->pc = 0x2B69F0u;
            goto label_2b69f0;
        }
    }
    ctx->pc = 0x2B696Cu;
    // 0x2b696c: 0x3402b810  ori         $v0, $zero, 0xB810
    ctx->pc = 0x2b696cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47120);
    // 0x2b6970: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x2b6970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x2b6974: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x2b6974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b6978: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B6978u;
    {
        const bool branch_taken_0x2b6978 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2B697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6978u;
        // 0x2b697c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6978) {
            ctx->pc = 0x2B69B8u;
            goto label_2b69b8;
        }
    }
    ctx->pc = 0x2B6980u;
    // 0x2b6980: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B6980u;
    {
        const bool branch_taken_0x2b6980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6980u;
        // 0x2b6984: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6980) {
            ctx->pc = 0x2B69D0u;
            goto label_2b69d0;
        }
    }
    ctx->pc = 0x2B6988u;
    // 0x2b6988: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2b6988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b698c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B698Cu;
    {
        const bool branch_taken_0x2b698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b698c) {
            ctx->pc = 0x2B6990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B698Cu;
            // 0x2b6990: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B69BCu;
            goto label_2b69bc;
        }
    }
    ctx->pc = 0x2B6994u;
    // 0x2b6994: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b6994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b6998: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6998u;
    {
        const bool branch_taken_0x2b6998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6998) {
            ctx->pc = 0x2B699Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6998u;
            // 0x2b699c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B69B0u;
            goto label_2b69b0;
        }
    }
    ctx->pc = 0x2B69A0u;
    // 0x2b69a0: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x2b69a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b69a4: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x2b69a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2b69a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b69a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b69ac: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2b69acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_2b69b0:
    // 0x2b69b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b69b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b69b4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2b69b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_2b69b8:
    // 0x2b69b8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2b69b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_2b69bc:
    // 0x2b69bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b69bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b69c0: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x2b69c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2b69c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B69C4u;
    {
        const bool branch_taken_0x2b69c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69C4u;
        // 0x2b69c8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69c4) {
            ctx->pc = 0x2B69F0u;
            goto label_2b69f0;
        }
    }
    ctx->pc = 0x2B69CCu;
    // 0x2b69cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b69ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b69d0:
    // 0x2b69d0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2b69d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b69d4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b69d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b69d8: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2b69d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b69dc: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x2b69dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2b69e0: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x2b69e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b69e4: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x2b69e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b69e8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B69E8u;
    {
        const bool branch_taken_0x2b69e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69E8u;
        // 0x2b69ec: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69e8) {
            ctx->pc = 0x2B69D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b69d0;
        }
    }
    ctx->pc = 0x2B69F0u;
label_2b69f0:
    // 0x2b69f0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b69f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b69f4: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2b69f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69f8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2b69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b69fc: 0xe46c4014  swc1        $f12, 0x4014($v1)
    ctx->pc = 0x2b69fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16404), bits); }
    // 0x2b6a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A00u;
        // 0x2b6a04: 0xac604018  sw          $zero, 0x4018($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6A08u;
}
