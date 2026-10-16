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

// Function: sub_00255558
// Address: 0x255558 - 0x255658
void sub_00255558_0x255558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255558_0x255558");
#endif

    switch (ctx->pc) {
        case 0x255570u: goto label_255570;
        case 0x2555b0u: goto label_2555b0;
        case 0x2555c0u: goto label_2555c0;
        case 0x255634u: goto label_255634;
        default: break;
    }

    ctx->pc = 0x255558u;

    // 0x255558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x255558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25555c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255560: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x255560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x255564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255568: 0xc0954b8  jal         func_2552E0
    ctx->pc = 0x255568u;
    SET_GPR_U32(ctx, 31, 0x255570u);
    ctx->pc = 0x25556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255568u;
    // 0x25556c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x255568u, 0x255570u)) {
        return;
    }
    ctx->pc = 0x255570u;
label_255570:
    // 0x255570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255574: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x255574u;
    {
        const bool branch_taken_0x255574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x255578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255574u;
        // 0x255578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255574) {
            ctx->pc = 0x25563Cu;
            goto label_25563c;
        }
    }
    ctx->pc = 0x25557Cu;
    // 0x25557c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x25557cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x255580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255584: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x255584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x255588: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x255588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x25558c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x25558cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x255590: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x255590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x255594: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x255594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x255598: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x255598u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x25559c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x25559cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2555a0: 0xa2060003  sb          $a2, 0x3($s0)
    ctx->pc = 0x2555a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x2555a4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2555a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2555a8: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x2555A8u;
    SET_GPR_U32(ctx, 31, 0x2555B0u);
    ctx->pc = 0x2555ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555A8u;
    // 0x2555ac: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x2555A8u, 0x2555B0u)) {
        return;
    }
    ctx->pc = 0x2555B0u;
label_2555b0:
    // 0x2555b0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2555b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2555b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2555b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555b8: 0xc095502  jal         func_255408
    ctx->pc = 0x2555B8u;
    SET_GPR_U32(ctx, 31, 0x2555C0u);
    ctx->pc = 0x2555BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555B8u;
    // 0x2555bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255408u, 0x2555B8u, 0x2555C0u)) {
        return;
    }
    ctx->pc = 0x2555C0u;
label_2555c0:
    // 0x2555c0: 0x6a220023  ldl         $v0, 0x23($s1)
    ctx->pc = 0x2555c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2555c4: 0x6e22001c  ldr         $v0, 0x1C($s1)
    ctx->pc = 0x2555c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2555c8: 0x6a23002b  ldl         $v1, 0x2B($s1)
    ctx->pc = 0x2555c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2555cc: 0x6e230024  ldr         $v1, 0x24($s1)
    ctx->pc = 0x2555ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2555d0: 0xb2020023  sdl         $v0, 0x23($s0)
    ctx->pc = 0x2555d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2555d4: 0xb602001c  sdr         $v0, 0x1C($s0)
    ctx->pc = 0x2555d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2555d8: 0xb203002b  sdl         $v1, 0x2B($s0)
    ctx->pc = 0x2555d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2555dc: 0xb6030024  sdr         $v1, 0x24($s0)
    ctx->pc = 0x2555dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2555e0: 0x24070101  addiu       $a3, $zero, 0x101
    ctx->pc = 0x2555e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2555e4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2555e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2555e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2555e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555ec: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2555ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2555f0: 0x248411e0  addiu       $a0, $a0, 0x11E0
    ctx->pc = 0x2555f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
    // 0x2555f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2555f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555f8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2555f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2555fc: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x2555fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x255600: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x255600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x255604: 0x6a280053  ldl         $t0, 0x53($s1)
    ctx->pc = 0x255604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x255608: 0x6e28004c  ldr         $t0, 0x4C($s1)
    ctx->pc = 0x255608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x25560c: 0x6a29005b  ldl         $t1, 0x5B($s1)
    ctx->pc = 0x25560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x255610: 0x6e290054  ldr         $t1, 0x54($s1)
    ctx->pc = 0x255610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x255614: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x255614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x255618: 0xb2080053  sdl         $t0, 0x53($s0)
    ctx->pc = 0x255618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25561c: 0xb608004c  sdr         $t0, 0x4C($s0)
    ctx->pc = 0x25561cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255620: 0xb209005b  sdl         $t1, 0x5B($s0)
    ctx->pc = 0x255620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255624: 0xb6090054  sdr         $t1, 0x54($s0)
    ctx->pc = 0x255624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255628: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x255628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x25562c: 0xc093996  jal         func_24E658
    ctx->pc = 0x25562Cu;
    SET_GPR_U32(ctx, 31, 0x255634u);
    ctx->pc = 0x255630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25562Cu;
    // 0x255630: 0xa6070062  sh          $a3, 0x62($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E658u, 0x25562Cu, 0x255634u)) {
        return;
    }
    ctx->pc = 0x255634u;
label_255634:
    // 0x255634: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x255634u;
    {
        const bool branch_taken_0x255634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255634u;
        // 0x255638: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255634) {
            ctx->pc = 0x255640u;
            goto label_255640;
        }
    }
    ctx->pc = 0x25563Cu;
label_25563c:
    // 0x25563c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25563cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255640:
    // 0x255640: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x255640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25564c: 0x3e00008  jr          $ra
    ctx->pc = 0x25564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25564Cu;
        // 0x255650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255654u;
    // 0x255654: 0x0  nop
    ctx->pc = 0x255654u;
    // NOP
    ctx->pc = 0x255658u;
}
