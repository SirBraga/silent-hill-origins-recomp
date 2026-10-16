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

// Function: sub_00214370
// Address: 0x214370 - 0x2149b0
void sub_00214370_0x214370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214370_0x214370");
#endif

    switch (ctx->pc) {
        case 0x2143b8u: goto label_2143b8;
        case 0x2143e0u: goto label_2143e0;
        case 0x214428u: goto label_214428;
        case 0x2144c0u: goto label_2144c0;
        case 0x2144f0u: goto label_2144f0;
        case 0x214540u: goto label_214540;
        case 0x214578u: goto label_214578;
        case 0x214678u: goto label_214678;
        case 0x21467cu: goto label_21467c;
        case 0x214718u: goto label_214718;
        case 0x214758u: goto label_214758;
        case 0x214838u: goto label_214838;
        case 0x2148d0u: goto label_2148d0;
        case 0x214928u: goto label_214928;
        default: break;
    }

    ctx->pc = 0x214370u;

    // 0x214370: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x214370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x214374: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x214374u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214378: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x214378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x21437c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x21437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x214380: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x214380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x214384: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x214384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x214388: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x214388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21438c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x21438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x214390: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x214390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214394: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x214394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x214398: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x214398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21439c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x21439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2143a0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2143a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2143a4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2143a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2143a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2143a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2143ac: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2143acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2143b0: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x2143b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x2143b4: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x2143b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
label_2143b8:
    // 0x2143b8: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2143b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2143bc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2143c0: 0x2dc20010  sltiu       $v0, $t6, 0x10
    ctx->pc = 0x2143c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2143c4: 0x0  nop
    ctx->pc = 0x2143c4u;
    // NOP
    // 0x2143c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2143C8u;
    {
        const bool branch_taken_0x2143c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2143CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143C8u;
        // 0x2143cc: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143c8) {
            ctx->pc = 0x2143B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2143b8;
        }
    }
    ctx->pc = 0x2143D0u;
    // 0x2143d0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2143D0u;
    {
        const bool branch_taken_0x2143d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143D0u;
        // 0x2143d4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143d0) {
            ctx->pc = 0x214408u;
            goto label_214408;
        }
    }
    ctx->pc = 0x2143D8u;
    // 0x2143d8: 0x8faa0054  lw          $t2, 0x54($sp)
    ctx->pc = 0x2143d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2143dc: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x2143dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2143e0:
    // 0x2143e0: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x2143e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2143e4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2143e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2143e8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x2143e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2143ec: 0x186202b  sltu        $a0, $t4, $a2
    ctx->pc = 0x2143ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2143f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2143f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2143f4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2143f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2143f8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2143f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2143fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2143fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x214400: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x214400u;
    {
        const bool branch_taken_0x214400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214400u;
        // 0x214404: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214400) {
            ctx->pc = 0x2143E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2143e0;
        }
    }
    ctx->pc = 0x214408u;
label_214408:
    // 0x214408: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x214408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21440c: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x21440cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x214410: 0x97a2002e  lhu         $v0, 0x2E($sp)
    ctx->pc = 0x214410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x214414: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x214414u;
    {
        const bool branch_taken_0x214414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214414u;
        // 0x214418: 0x8c790000  lw          $t9, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214414) {
            ctx->pc = 0x214440u;
            goto label_214440;
        }
    }
    ctx->pc = 0x21441Cu;
    // 0x21441c: 0x2683001e  addiu       $v1, $s4, 0x1E
    ctx->pc = 0x21441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 30));
    // 0x214420: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x214420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x214424: 0x0  nop
    ctx->pc = 0x214424u;
    // NOP
label_214428:
    // 0x214428: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x214428u;
    {
        const bool branch_taken_0x214428 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214428u;
        // 0x21442c: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214428) {
            ctx->pc = 0x214440u;
            goto label_214440;
        }
    }
    ctx->pc = 0x214430u;
    // 0x214430: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x214430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214434: 0x0  nop
    ctx->pc = 0x214434u;
    // NOP
    // 0x214438: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x214438u;
    {
        const bool branch_taken_0x214438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214438) {
            ctx->pc = 0x21443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214438u;
            // 0x21443c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214428;
        }
    }
    ctx->pc = 0x214440u;
label_214440:
    // 0x214440: 0x259102b  sltu        $v0, $s2, $t9
    ctx->pc = 0x214440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x214444: 0x16400018  bnez        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x214444u;
    {
        const bool branch_taken_0x214444 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x214448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214444u;
        // 0x214448: 0x242c80b  movn        $t9, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214444) {
            ctx->pc = 0x2144A8u;
            goto label_2144a8;
        }
    }
    ctx->pc = 0x21444Cu;
    // 0x21444c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21444cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x214450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214454: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x214454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x214458: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x214458u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x21445c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x21445cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x214460: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x214460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214464: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x214464u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x214468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21446c: 0x8ba40003  lwl         $a0, 0x3($sp)
    ctx->pc = 0x21446cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x214470: 0x9ba40000  lwr         $a0, 0x0($sp)
    ctx->pc = 0x214470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x214474: 0xa8640003  swl         $a0, 0x3($v1)
    ctx->pc = 0x214474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x214478: 0xb8640000  swr         $a0, 0x0($v1)
    ctx->pc = 0x214478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x21447c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21447cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x214480: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x214480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x214484: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x214484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x214488: 0x8ba90003  lwl         $t1, 0x3($sp)
    ctx->pc = 0x214488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x21448c: 0x9ba90000  lwr         $t1, 0x0($sp)
    ctx->pc = 0x21448cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x214490: 0xa8690003  swl         $t1, 0x3($v1)
    ctx->pc = 0x214490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x214494: 0xb8690000  swr         $t1, 0x0($v1)
    ctx->pc = 0x214494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x214498: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x214498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x21449c: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x21449cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2144a0: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2144A0u;
    {
        const bool branch_taken_0x2144a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144A0u;
        // 0x2144a4: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144a0) {
            ctx->pc = 0x214978u;
            goto label_214978;
        }
    }
    ctx->pc = 0x2144A8u;
label_2144a8:
    // 0x2144a8: 0x97a20012  lhu         $v0, 0x12($sp)
    ctx->pc = 0x2144a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x2144ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2144ACu;
    {
        const bool branch_taken_0x2144ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2144B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144ACu;
        // 0x2144b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144ac) {
            ctx->pc = 0x2144D8u;
            goto label_2144d8;
        }
    }
    ctx->pc = 0x2144B4u;
    // 0x2144b4: 0x26830002  addiu       $v1, $s4, 0x2
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x2144b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2144b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2144bc: 0x0  nop
    ctx->pc = 0x2144bcu;
    // NOP
label_2144c0:
    // 0x2144c0: 0x2d020010  sltiu       $v0, $t0, 0x10
    ctx->pc = 0x2144c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2144c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2144C4u;
    {
        const bool branch_taken_0x2144c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144C4u;
        // 0x2144c8: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144c4) {
            ctx->pc = 0x2144D8u;
            goto label_2144d8;
        }
    }
    ctx->pc = 0x2144CCu;
    // 0x2144cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2144ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2144d0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2144D0u;
    {
        const bool branch_taken_0x2144d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2144d0) {
            ctx->pc = 0x2144D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2144D0u;
            // 0x2144d4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2144C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2144c0;
        }
    }
    ctx->pc = 0x2144D8u;
label_2144d8:
    // 0x2144d8: 0x328102b  sltu        $v0, $t9, $t0
    ctx->pc = 0x2144d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2144dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2144dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2144e0: 0x102c80b  movn        $t9, $t0, $v0
    ctx->pc = 0x2144e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 25, GPR_U64(ctx, 8));
    // 0x2144e4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2144e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2144e8: 0x26830002  addiu       $v1, $s4, 0x2
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x2144ec: 0x0  nop
    ctx->pc = 0x2144ecu;
    // NOP
label_2144f0:
    // 0x2144f0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2144f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2144f4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2144f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2144f8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2144f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2144fc: 0x480005a  bltz        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2144FCu;
    {
        const bool branch_taken_0x2144fc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x214500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144FCu;
        // 0x214500: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144fc) {
            ctx->pc = 0x214668u;
            goto label_214668;
        }
    }
    ctx->pc = 0x214504u;
    // 0x214504: 0x2dc20010  sltiu       $v0, $t6, 0x10
    ctx->pc = 0x214504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x214508: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x214508u;
    {
        const bool branch_taken_0x214508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214508u;
        // 0x21450c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214508) {
            ctx->pc = 0x2144F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2144f0;
        }
    }
    ctx->pc = 0x214510u;
    // 0x214510: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214510u;
    {
        const bool branch_taken_0x214510 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x214514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214510u;
        // 0x214514: 0x8fbe0050  lw          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214510) {
            ctx->pc = 0x214528u;
            goto label_214528;
        }
    }
    ctx->pc = 0x214518u;
    // 0x214518: 0x13c00053  beqz        $fp, . + 4 + (0x53 << 2)
    ctx->pc = 0x214518u;
    {
        const bool branch_taken_0x214518 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x21451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214518u;
        // 0x21451c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214518) {
            ctx->pc = 0x214668u;
            goto label_214668;
        }
    }
    ctx->pc = 0x214520u;
    // 0x214520: 0x16420115  bne         $s2, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x214520u;
    {
        const bool branch_taken_0x214520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x214524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214520u;
        // 0x214524: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214520) {
            ctx->pc = 0x214978u;
            goto label_214978;
        }
    }
    ctx->pc = 0x214528u;
label_214528:
    // 0x214528: 0xa7a00032  sh          $zero, 0x32($sp)
    ctx->pc = 0x214528u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x21452c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x21452cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214530: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x214530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x214534: 0x268b0002  addiu       $t3, $s4, 0x2
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x214538: 0x27aa0032  addiu       $t2, $sp, 0x32
    ctx->pc = 0x214538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x21453c: 0x0  nop
    ctx->pc = 0x21453cu;
    // NOP
label_214540:
    // 0x214540: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x214540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x214544: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x214544u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x214548: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x214548u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x21454c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x21454cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x214550: 0x2dc4000f  sltiu       $a0, $t6, 0xF
    ctx->pc = 0x214550u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x214554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214558: 0xa5430002  sh          $v1, 0x2($t2)
    ctx->pc = 0x214558u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x21455c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21455Cu;
    {
        const bool branch_taken_0x21455c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21455Cu;
        // 0x214560: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21455c) {
            ctx->pc = 0x214540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214540;
        }
    }
    ctx->pc = 0x214564u;
    // 0x214564: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x214564u;
    {
        const bool branch_taken_0x214564 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x214568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214564u;
        // 0x214568: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214564) {
            ctx->pc = 0x2145B4u;
            goto label_2145b4;
        }
    }
    ctx->pc = 0x21456Cu;
    // 0x21456c: 0x8faa0054  lw          $t2, 0x54($sp)
    ctx->pc = 0x21456cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x214570: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x214570u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214574: 0x0  nop
    ctx->pc = 0x214574u;
    // NOP
label_214578:
    // 0x214578: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x214578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x21457c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21457Cu;
    {
        const bool branch_taken_0x21457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21457Cu;
        // 0x214580: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21457c) {
            ctx->pc = 0x2145A4u;
            goto label_2145a4;
        }
    }
    ctx->pc = 0x214584u;
    // 0x214584: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x214584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x214588: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x214588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21458c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21458cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x214590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x214594: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x214594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x214598: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x214598u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x21459c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x21459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2145a0: 0xa48c0000  sh          $t4, 0x0($a0)
    ctx->pc = 0x2145a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 12));
label_2145a4:
    // 0x2145a4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2145a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2145a8: 0x186102b  sltu        $v0, $t4, $a2
    ctx->pc = 0x2145a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2145ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2145ACu;
    {
        const bool branch_taken_0x2145ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2145B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145ACu;
        // 0x2145b0: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145ac) {
            ctx->pc = 0x214578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214578;
        }
    }
    ctx->pc = 0x2145B4u;
label_2145b4:
    // 0x2145b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2145b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2145B8u;
    {
        const bool branch_taken_0x2145b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145B8u;
        // 0x2145bc: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145b8) {
            ctx->pc = 0x2145D4u;
            goto label_2145d4;
        }
    }
    ctx->pc = 0x2145C0u;
    // 0x2145c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2145c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2145c4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2145C4u;
    {
        const bool branch_taken_0x2145c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2145C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145C4u;
        // 0x2145c8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145c4) {
            ctx->pc = 0x2145E8u;
            goto label_2145e8;
        }
    }
    ctx->pc = 0x2145CCu;
    // 0x2145cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2145CCu;
    {
        const bool branch_taken_0x2145cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145CCu;
        // 0x2145d0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145cc) {
            ctx->pc = 0x214608u;
            goto label_214608;
        }
    }
    ctx->pc = 0x2145D4u;
label_2145d4:
    // 0x2145d4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2145d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2145d8: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x2145d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145dc: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x2145dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2145E0u;
    {
        const bool branch_taken_0x2145e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145E0u;
        // 0x2145e4: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145e0) {
            ctx->pc = 0x21461Cu;
            goto label_21461c;
        }
    }
    ctx->pc = 0x2145E8u;
label_2145e8:
    // 0x2145e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2145e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2145ec: 0x24576318  addiu       $s7, $v0, 0x6318
    ctx->pc = 0x2145ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25368));
    // 0x2145f0: 0x24766358  addiu       $s6, $v1, 0x6358
    ctx->pc = 0x2145f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 25432));
    // 0x2145f4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2145f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2145f8: 0x26f7fdfe  addiu       $s7, $s7, -0x202
    ctx->pc = 0x2145f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966782));
    // 0x2145fc: 0x26d6fdfe  addiu       $s6, $s6, -0x202
    ctx->pc = 0x2145fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966782));
    // 0x214600: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214600u;
    {
        const bool branch_taken_0x214600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214600u;
        // 0x214604: 0xafa60060  sw          $a2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214600) {
            ctx->pc = 0x21461Cu;
            goto label_21461c;
        }
    }
    ctx->pc = 0x214608u;
label_214608:
    // 0x214608: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x214608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21460c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21460cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x214610: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x214610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x214614: 0x24576398  addiu       $s7, $v0, 0x6398
    ctx->pc = 0x214614u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25496));
    // 0x214618: 0x247663d8  addiu       $s6, $v1, 0x63D8
    ctx->pc = 0x214618u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 25560));
label_21461c:
    // 0x21461c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214620: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x214620u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214624: 0x3224804  sllv        $t1, $v0, $t9
    ctx->pc = 0x214624u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x214628: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x214628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x21462c: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x21462cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x214630: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x214630u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214634: 0xafa8005c  sw          $t0, 0x5C($sp)
    ctx->pc = 0x214634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 8));
    // 0x214638: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x214638u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21463c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x21463cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214640: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x214640u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214644: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x214644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214648: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x214648u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21464c: 0x15420008  bne         $t2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21464Cu;
    {
        const bool branch_taken_0x21464c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x214650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21464Cu;
        // 0x214650: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21464c) {
            ctx->pc = 0x214670u;
            goto label_214670;
        }
    }
    ctx->pc = 0x214654u;
    // 0x214654: 0x2d2205b0  sltiu       $v0, $t1, 0x5B0
    ctx->pc = 0x214654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1456) ? 1 : 0);
    // 0x214658: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x214658u;
    {
        const bool branch_taken_0x214658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214658) {
            ctx->pc = 0x21465Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214658u;
            // 0x21465c: 0xafb40070  sw          $s4, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214674u;
            goto label_214674;
        }
    }
    ctx->pc = 0x214660u;
    // 0x214660: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x214660u;
    {
        const bool branch_taken_0x214660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214660u;
        // 0x214664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214660) {
            ctx->pc = 0x214978u;
            goto label_214978;
        }
    }
    ctx->pc = 0x214668u;
label_214668:
    // 0x214668: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x214668u;
    {
        const bool branch_taken_0x214668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214668u;
        // 0x21466c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214668) {
            ctx->pc = 0x214978u;
            goto label_214978;
        }
    }
    ctx->pc = 0x214670u;
label_214670:
    // 0x214670: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x214670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_214674:
    // 0x214674: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x214674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214678:
    // 0x214678: 0x1d81823  subu        $v1, $t6, $t8
    ctx->pc = 0x214678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
label_21467c:
    // 0x21467c: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x21467cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x214680: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x214680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x214684: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x214684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x214688: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x214688u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21468c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x21468cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214690: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x214690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x214694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214694u;
    {
        const bool branch_taken_0x214694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214694u;
        // 0x214698: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214694) {
            ctx->pc = 0x2146ACu;
            goto label_2146ac;
        }
    }
    ctx->pc = 0x21469Cu;
    // 0x21469c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x21469cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2146a0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x2146a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2146a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2146A4u;
    {
        const bool branch_taken_0x2146a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146A4u;
        // 0x2146a8: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146a4) {
            ctx->pc = 0x2146ECu;
            goto label_2146ec;
        }
    }
    ctx->pc = 0x2146ACu;
label_2146ac:
    // 0x2146ac: 0x8fbe0060  lw          $fp, 0x60($sp)
    ctx->pc = 0x2146acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2146b0: 0x3c4102a  slt         $v0, $fp, $a0
    ctx->pc = 0x2146b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2146b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2146B4u;
    {
        const bool branch_taken_0x2146b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146B4u;
        // 0x2146b8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146b4) {
            ctx->pc = 0x2146E0u;
            goto label_2146e0;
        }
    }
    ctx->pc = 0x2146BCu;
    // 0x2146bc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2146bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2146c0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2146c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2146c4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2146c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2146c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2146c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2146cc: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2146ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2146d0: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x2146d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2146d4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2146d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2146d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2146D8u;
    {
        const bool branch_taken_0x2146d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146D8u;
        // 0x2146dc: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146d8) {
            ctx->pc = 0x2146ECu;
            goto label_2146ec;
        }
    }
    ctx->pc = 0x2146E0u;
label_2146e0:
    // 0x2146e0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2146e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2146e4: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x2146e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2146e8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2146e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_2146ec:
    // 0x2146ec: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x2146ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2146f0: 0xe3040  sll         $a2, $t6, 1
    ctx->pc = 0x2146f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x2146f4: 0x25caffff  addiu       $t2, $t6, -0x1
    ctx->pc = 0x2146f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2146f8: 0x1714004  sllv        $t0, $s1, $t3
    ctx->pc = 0x2146f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 11) & 0x1F));
    // 0x2146fc: 0x712004  sllv        $a0, $s1, $v1
    ctx->pc = 0x2146fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 3) & 0x1F));
    // 0x214700: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x214700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x214704: 0xafaa0074  sw          $t2, 0x74($sp)
    ctx->pc = 0x214704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 10));
    // 0x214708: 0x258f0001  addiu       $t7, $t4, 0x1
    ctx->pc = 0x214708u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x21470c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x21470cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214710: 0x30d3006  srlv        $a2, $t5, $t8
    ctx->pc = 0x214710u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
    // 0x214714: 0x0  nop
    ctx->pc = 0x214714u;
    // NOP
label_214718:
    // 0x214718: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x214718u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21471c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x21471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x214720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x214720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x214724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x214728: 0x8bac0003  lwl         $t4, 0x3($sp)
    ctx->pc = 0x214728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x21472c: 0x9bac0000  lwr         $t4, 0x0($sp)
    ctx->pc = 0x21472cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x214730: 0xa84c0003  swl         $t4, 0x3($v0)
    ctx->pc = 0x214730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x214734: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x214734u;
    {
        const bool branch_taken_0x214734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214734u;
        // 0x214738: 0xb84c0000  swr         $t4, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214734) {
            ctx->pc = 0x214718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214718;
        }
    }
    ctx->pc = 0x21473Cu;
    // 0x21473c: 0x8fac0074  lw          $t4, 0x74($sp)
    ctx->pc = 0x21473cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x214740: 0x1912004  sllv        $a0, $s1, $t4
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 12) & 0x1F));
    // 0x214744: 0x1a41024  and         $v0, $t5, $a0
    ctx->pc = 0x214744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 4));
    // 0x214748: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214748u;
    {
        const bool branch_taken_0x214748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214748) {
            ctx->pc = 0x214770u;
            goto label_214770;
        }
    }
    ctx->pc = 0x214750u;
    // 0x214750: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x214750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x214754: 0x0  nop
    ctx->pc = 0x214754u;
    // NOP
label_214758:
    // 0x214758: 0x1a41024  and         $v0, $t5, $a0
    ctx->pc = 0x214758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 4));
    // 0x21475c: 0x0  nop
    ctx->pc = 0x21475cu;
    // NOP
    // 0x214760: 0x0  nop
    ctx->pc = 0x214760u;
    // NOP
    // 0x214764: 0x0  nop
    ctx->pc = 0x214764u;
    // NOP
    // 0x214768: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x214768u;
    {
        const bool branch_taken_0x214768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214768) {
            ctx->pc = 0x21476Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214768u;
            // 0x21476c: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214758;
        }
    }
    ctx->pc = 0x214770u;
label_214770:
    // 0x214770: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214770u;
    {
        const bool branch_taken_0x214770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214770u;
        // 0x214774: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214770) {
            ctx->pc = 0x214784u;
            goto label_214784;
        }
    }
    ctx->pc = 0x214778u;
    // 0x214778: 0x1a26824  and         $t5, $t5, $v0
    ctx->pc = 0x214778u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x21477c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21477Cu;
    {
        const bool branch_taken_0x21477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21477Cu;
        // 0x214780: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21477c) {
            ctx->pc = 0x214788u;
            goto label_214788;
        }
    }
    ctx->pc = 0x214784u;
label_214784:
    // 0x214784: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x214784u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214788:
    // 0x214788: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x214788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21478c: 0x8fbe0078  lw          $fp, 0x78($sp)
    ctx->pc = 0x21478cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x214790: 0x21e1821  addu        $v1, $s0, $fp
    ctx->pc = 0x214790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x214794: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x214794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214798: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21479c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x21479cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2147a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2147a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2147a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2147A4u;
    {
        const bool branch_taken_0x2147a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2147A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147A4u;
        // 0x2147a8: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147a4) {
            ctx->pc = 0x2147CCu;
            goto label_2147cc;
        }
    }
    ctx->pc = 0x2147ACu;
    // 0x2147ac: 0x11d20040  beq         $t6, $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2147ACu;
    {
        const bool branch_taken_0x2147ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 18));
        ctx->pc = 0x2147B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147ACu;
        // 0x2147b0: 0xf1040  sll         $v0, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147ac) {
            ctx->pc = 0x2148B0u;
            goto label_2148b0;
        }
    }
    ctx->pc = 0x2147B4u;
    // 0x2147b4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2147b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2147b8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2147b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2147bc: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2147bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2147c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2147c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2147c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2147c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2147c8: 0x946e0000  lhu         $t6, 0x0($v1)
    ctx->pc = 0x2147c8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2147cc:
    // 0x2147cc: 0x32e102b  sltu        $v0, $t9, $t6
    ctx->pc = 0x2147ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x2147d0: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2147D0u;
    {
        const bool branch_taken_0x2147d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147D0u;
        // 0x2147d4: 0x1d81823  subu        $v1, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147d0) {
            ctx->pc = 0x21467Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21467c;
        }
    }
    ctx->pc = 0x2147D8u;
    // 0x2147d8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2147d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2147dc: 0x1a33024  and         $a2, $t5, $v1
    ctx->pc = 0x2147dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x2147e0: 0x10c7ffa6  beq         $a2, $a3, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2147E0u;
    {
        const bool branch_taken_0x2147e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2147E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147E0u;
        // 0x2147e4: 0x1d81823  subu        $v1, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147e0) {
            ctx->pc = 0x21467Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21467c;
        }
    }
    ctx->pc = 0x2147E8u;
    // 0x2147e8: 0x338c00a  movz        $t8, $t9, $t8
    ctx->pc = 0x2147e8u;
    if (GPR_U64(ctx, 24) == 0) SET_GPR_U64(ctx, 24, GPR_U64(ctx, 25));
    // 0x2147ec: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2147ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2147f0: 0x1d85823  subu        $t3, $t6, $t8
    ctx->pc = 0x2147f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x2147f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2147f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2147f8: 0x1781821  addu        $v1, $t3, $t8
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x2147fc: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x2147fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x214800: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x214800u;
    {
        const bool branch_taken_0x214800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214800u;
        // 0x214804: 0x1712004  sllv        $a0, $s1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214800) {
            ctx->pc = 0x21485Cu;
            goto label_21485c;
        }
    }
    ctx->pc = 0x214808u;
    // 0x214808: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x214808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21480c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x21480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x214810: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x214810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214814: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x214814u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x214818: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x214818u;
    {
        const bool branch_taken_0x214818 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214818u;
        // 0x21481c: 0x8fa70070  lw          $a3, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214818) {
            ctx->pc = 0x21485Cu;
            goto label_21485c;
        }
    }
    ctx->pc = 0x214820u;
    // 0x214820: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x214820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x214824: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x214824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x214828: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21482c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214830: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x214830u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x214834: 0x0  nop
    ctx->pc = 0x214834u;
    // NOP
label_214838:
    // 0x214838: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x214838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x21483c: 0x1781021  addu        $v0, $t3, $t8
    ctx->pc = 0x21483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x214840: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x214840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x214844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214844u;
    {
        const bool branch_taken_0x214844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214844u;
        // 0x214848: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214844) {
            ctx->pc = 0x21485Cu;
            goto label_21485c;
        }
    }
    ctx->pc = 0x21484Cu;
    // 0x21484c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21484cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214850: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x214850u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214854: 0x5c80fff8  bgtzl       $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x214854u;
    {
        const bool branch_taken_0x214854 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x214854) {
            ctx->pc = 0x214858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214854u;
            // 0x214858: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214838;
        }
    }
    ctx->pc = 0x21485Cu;
label_21485c:
    // 0x21485c: 0x1711004  sllv        $v0, $s1, $t3
    ctx->pc = 0x21485cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 11) & 0x1F));
    // 0x214860: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214864: 0x15110004  bne         $t0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x214864u;
    {
        const bool branch_taken_0x214864 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 17));
        ctx->pc = 0x214868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214864u;
        // 0x214868: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214864) {
            ctx->pc = 0x214878u;
            goto label_214878;
        }
    }
    ctx->pc = 0x21486Cu;
    // 0x21486c: 0x2d2205b0  sltiu       $v0, $t1, 0x5B0
    ctx->pc = 0x21486cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1456) ? 1 : 0);
    // 0x214870: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x214870u;
    {
        const bool branch_taken_0x214870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214870u;
        // 0x214874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214870) {
            ctx->pc = 0x214978u;
            goto label_214978;
        }
    }
    ctx->pc = 0x214878u;
label_214878:
    // 0x214878: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x214878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21487c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21487cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214880: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x214880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x214884: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x214888: 0xa06b0000  sb          $t3, 0x0($v1)
    ctx->pc = 0x214888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x21488c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214890: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x214890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214894: 0xa0590001  sb          $t9, 0x1($v0)
    ctx->pc = 0x214894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 25));
    // 0x214898: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x214898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21489c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x21489cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2148a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2148a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2148a4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2148a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2148a8: 0x1000ff73  b           . + 4 + (-0x8D << 2)
    ctx->pc = 0x2148A8u;
    {
        const bool branch_taken_0x2148a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148A8u;
        // 0x2148ac: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148a8) {
            ctx->pc = 0x214678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214678;
        }
    }
    ctx->pc = 0x2148B0u;
label_2148b0:
    // 0x2148b0: 0x8faa007c  lw          $t2, 0x7C($sp)
    ctx->pc = 0x2148b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2148b4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2148b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2148b8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2148b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2148bc: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x2148bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2148c0: 0xa3aa0001  sb          $t2, 0x1($sp)
    ctx->pc = 0x2148c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x2148c4: 0x11a00026  beqz        $t5, . + 4 + (0x26 << 2)
    ctx->pc = 0x2148C4u;
    {
        const bool branch_taken_0x2148c4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C4u;
        // 0x2148c8: 0xa7a00002  sh          $zero, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148c4) {
            ctx->pc = 0x214960u;
            goto label_214960;
        }
    }
    ctx->pc = 0x2148CCu;
    // 0x2148cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2148ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2148d0:
    // 0x2148d0: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x2148D0u;
    {
        const bool branch_taken_0x2148d0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148D0u;
        // 0x2148d4: 0x8fab005c  lw          $t3, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148d0) {
            ctx->pc = 0x2148F4u;
            goto label_2148f4;
        }
    }
    ctx->pc = 0x2148D8u;
    // 0x2148d8: 0x1ab1024  and         $v0, $t5, $t3
    ctx->pc = 0x2148d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x2148dc: 0x10470006  beq         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2148DCu;
    {
        const bool branch_taken_0x2148dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2148E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148DCu;
        // 0x2148e0: 0x30d1006  srlv        $v0, $t5, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148dc) {
            ctx->pc = 0x2148F8u;
            goto label_2148f8;
        }
    }
    ctx->pc = 0x2148E4u;
    // 0x2148e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2148e8: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2148e8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148ec: 0xa3b90001  sb          $t9, 0x1($sp)
    ctx->pc = 0x2148ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 25));
    // 0x2148f0: 0x320702d  daddu       $t6, $t9, $zero
    ctx->pc = 0x2148f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_2148f4:
    // 0x2148f4: 0x30d1006  srlv        $v0, $t5, $t8
    ctx->pc = 0x2148f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
label_2148f8:
    // 0x2148f8: 0x25c3ffff  addiu       $v1, $t6, -0x1
    ctx->pc = 0x2148f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2148fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214900: 0x692004  sllv        $a0, $t1, $v1
    ctx->pc = 0x214900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x214904: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x214904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x214908: 0x1a41824  and         $v1, $t5, $a0
    ctx->pc = 0x214908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & GPR_U64(ctx, 4));
    // 0x21490c: 0x8bac0003  lwl         $t4, 0x3($sp)
    ctx->pc = 0x21490cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x214910: 0x9bac0000  lwr         $t4, 0x0($sp)
    ctx->pc = 0x214910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x214914: 0xa84c0003  swl         $t4, 0x3($v0)
    ctx->pc = 0x214914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x214918: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x214918u;
    {
        const bool branch_taken_0x214918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xb84c0000  swr         $t4, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214918) {
            ctx->pc = 0x214940u;
            goto label_214940;
        }
    }
    ctx->pc = 0x214920u;
    // 0x214920: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x214924: 0x0  nop
    ctx->pc = 0x214924u;
    // NOP
label_214928:
    // 0x214928: 0x1a41024  and         $v0, $t5, $a0
    ctx->pc = 0x214928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 4));
    // 0x21492c: 0x0  nop
    ctx->pc = 0x21492cu;
    // NOP
    // 0x214930: 0x0  nop
    ctx->pc = 0x214930u;
    // NOP
    // 0x214934: 0x0  nop
    ctx->pc = 0x214934u;
    // NOP
    // 0x214938: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x214938u;
    {
        const bool branch_taken_0x214938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214938) {
            ctx->pc = 0x21493Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214938u;
            // 0x21493c: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214928;
        }
    }
    ctx->pc = 0x214940u;
label_214940:
    // 0x214940: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214940u;
    {
        const bool branch_taken_0x214940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214940u;
        // 0x214944: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214940) {
            ctx->pc = 0x214954u;
            goto label_214954;
        }
    }
    ctx->pc = 0x214948u;
    // 0x214948: 0x1a26824  and         $t5, $t5, $v0
    ctx->pc = 0x214948u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x21494c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21494Cu;
    {
        const bool branch_taken_0x21494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21494Cu;
        // 0x214950: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21494c) {
            ctx->pc = 0x214958u;
            goto label_214958;
        }
    }
    ctx->pc = 0x214954u;
label_214954:
    // 0x214954: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x214954u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214958:
    // 0x214958: 0x15a0ffdd  bnez        $t5, . + 4 + (-0x23 << 2)
    ctx->pc = 0x214958u;
    {
        const bool branch_taken_0x214958 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x214958) {
            ctx->pc = 0x2148D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2148d0;
        }
    }
    ctx->pc = 0x214960u;
label_214960:
    // 0x214960: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x214960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214968: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x214968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21496c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x21496cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x214970: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x214970u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x214974: 0xad390000  sw          $t9, 0x0($t1)
    ctx->pc = 0x214974u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 25));
label_214978:
    // 0x214978: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x214978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21497c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x21497cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x214980: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x214980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x214984: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x214984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x214988: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x214988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21498c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x21498cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x214990: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x214990u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x214994: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x214994u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214998: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x214998u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21499c: 0x3e00008  jr          $ra
    ctx->pc = 0x21499Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21499Cu;
        // 0x2149a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21499Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2149A4u;
    // 0x2149a4: 0x0  nop
    ctx->pc = 0x2149a4u;
    // NOP
    // 0x2149a8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2149a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2149ac: 0x0  nop
    ctx->pc = 0x2149acu;
    // NOP
    ctx->pc = 0x2149b0u;
}
